#include <Wire.h>
#include "Adafruit_LEDBackpack.h"
#include "Adafruit_GFX.h"

//Objeto dispay
Adafruit_7segment display = Adafruit_7segment();

// Variáveis do relógio
int horas = 14;
int minutos = 0;
int segundos = 0;
unsigned long ultimoTempo = 0;

// Pinos dos botões
const int btnHora = 2;    
const int btnMinuto = 3;  

void setup() {
  Serial.begin(9600);
  
  // Inicializa display
  display.begin(0x70);
  display.setBrightness(10);
  
  // Configura botões
  pinMode(btnHora, INPUT_PULLUP);
  pinMode(btnMinuto, INPUT_PULLUP);
  
  atualizarDisplay();
}

void loop() {
  // Atualiza o tempo a cada segundo
  if(millis() - ultimoTempo >= 1000) {
    ultimoTempo = millis();
    segundos++;
    
    if(segundos >= 60) {
      segundos = 0;
      minutos++;
      
      if(minutos >= 60) {
        minutos = 0;
        horas++;
        
        if(horas >= 24) {
          horas = 0;
        }
      }
    }
    
    atualizarDisplay();
  }
  
  verificarBotoes(); // Verifica os botões físicos
  ajustarHoraSerial(); // Verifica ajuste serial
}

void atualizarDisplay() {
  int valorDisplay = horas * 100 + minutos;
  display.print(valorDisplay, DEC);
  bool pontos = segundos % 2 == 0;
  display.drawColon(pontos);
  display.writeDisplay();
}

//Ajustar hora por terminal (Não implementado)
void ajustarHoraSerial() {
  if(Serial.available()) {
    String input = Serial.readStringUntil('\n');
    
    if(input.startsWith("SET ")) {
      int h = input.substring(4,6).toInt();
      int m = input.substring(7,9).toInt();
      
      if(h >= 0 && h < 24 && m >= 0 && m < 60) {
        horas = h;
        minutos = m;
        segundos = 0;
        Serial.print("Hora ajustada para: ");
        Serial.print(horas);
        Serial.print(":");
        Serial.println(minutos);
        atualizarDisplay();
      }
    }
  }
}

//Ajuste de horas por meio de botões (Apenas de forma crescente)
void verificarBotoes() {
  // Ajuste de horas
  if(digitalRead(btnHora) == LOW) {
    delay(50);
    if(digitalRead(btnHora) == LOW) {
      horas = (horas + 1) % 24;
      segundos = 0;
      Serial.print("Hora ajustada para: ");
      Serial.println(horas);
      atualizarDisplay();
      while(digitalRead(btnHora) == LOW);
    }
  }

  // Ajuste de minutos
  if(digitalRead(btnMinuto) == LOW) {
    delay(50);
    if(digitalRead(btnMinuto) == LOW) {
      minutos = (minutos + 1) % 60;
      segundos = 0;
      Serial.print("Minuto ajustado para: ");
      Serial.println(minutos);
      atualizarDisplay();
      while(digitalRead(btnMinuto) == LOW);
    }
  }
}