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
const int btnHora_mais = 2;    
const int btnMinuto_mais = 3;  
const int btnhora_menos = 4;
const int btnminuto_menos = 5;

//função de inicialização
void setup() {
  Serial.begin(9600);
  
  // Inicializa display
  display.begin(0x70);
  display.setBrightness(10);
  
  // Configura botões
  pinMode(btnHora_mais, INPUT_PULLUP);
  pinMode(btnMinuto_mais, INPUT_PULLUP);
  pinMode(btnhora_menos, INPUT_PULLUP);
  pinMode(btnminuto_menos, INPUT_PULLUP);
  
  atualizarDisplay();
}

void loop() {
  // Atualiza o tempo a cada segundo
  //Mudar a depender do termpo de resposta do simulador
  if(millis() - ultimoTempo >= 1000 ) {
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

//Ajustar hora por monitor serial
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

//Ajuste de horas por meio de botões
void verificarBotoes() {
  // Ajuste de horas para mais
  if(digitalRead(btnHora_mais) == LOW) {
    delay(50);
    if(digitalRead(btnHora_mais) == LOW) {
      horas = (horas + 1) % 24;
      segundos = 0;
      Serial.print("Hora ajustada para: ");
      Serial.println(horas);
      atualizarDisplay();
      while(digitalRead(btnHora_mais) == LOW);
    }
  }

  // Ajuste de minutos para mais
  if(digitalRead(btnMinuto_mais) == LOW) {
    delay(50);
    if(digitalRead(btnMinuto_mais) == LOW) {
      minutos = (minutos + 1) % 60;
      segundos = 0;
      Serial.print("Minuto ajustado para: ");
      Serial.println(minutos);
      atualizarDisplay();
      while(digitalRead(btnMinuto_mais) == LOW);
    }
  }

  //Ajuste de horas para menos
  if(digitalRead(btnhora_menos) == LOW) {
    delay(50);
    if(digitalRead(btnhora_menos) == LOW) {
      horas = (horas - 1) % 24;
      segundos = 0;
      Serial.print("Hora ajustada para: ");
      Serial.println(horas);
      atualizarDisplay();
      while(digitalRead(btnhora_menos) == LOW);
    }
  }

  // Ajuste de minutos para menos
  if(digitalRead(btnminuto_menos) == LOW) {
    delay(50);
    if(digitalRead(btnminuto_menos) == LOW) {
      minutos = (minutos - 1) % 60;
      segundos = 0;
      Serial.print("Minuto ajustado para: ");
      Serial.println(minutos);
      atualizarDisplay();
      while(digitalRead(btnminuto_menos) == LOW);
    }
  }
}