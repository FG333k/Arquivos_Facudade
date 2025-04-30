#include <Wire.h> // Habilita comunicação 12C para o display
#include "Adafruit_LEDBackpack.h" // Biblioteca específica para displays LED da Adafruit
#include "Adafruit_GFX.h" // Biblioteca gráfica para LEDBackpack

// Instância do display de 7 segmentos chamada (Display)
Adafruit_7segment display = Adafruit_7segment();

// Variáveis do relógio (Hora inicial)
int horas = 14;
int minutos = 0;
int segundos = 0;
unsigned long ultimoTempo = 0; // Registra o ultimo momento da atualização (Contagem de 1 segundo)

// Declara os pinos dos botões (Em suas respectivas portas)
const int btnHora_mais = 2;    
const int btnMinuto_mais = 3;  
const int btnhora_menos = 4;
const int btnminuto_menos = 5;

// função de inicialização
void setup() {

  Serial.begin(9600); // Inicializa comunicação serial (Para debug)
  
  // Inicializa display
  display.begin(0x70); // Endereço 
  display.setBrightness(10); // Brilho (0-15)
  
  // Configura botões como entrada 
  pinMode(btnHora_mais, INPUT_PULLUP);
  pinMode(btnMinuto_mais, INPUT_PULLUP);
  pinMode(btnhora_menos, INPUT_PULLUP);
  pinMode(btnminuto_menos, INPUT_PULLUP);
  
  atualizarDisplay(); // Mostra hora inicial do relógio

}

void loop() {

  // Atualiza o tempo a cada segundo
  if(millis() - ultimoTempo >= 1000 ) {  //Mudar a depender do termpo de resposta do simulador
    ultimoTempo = millis();
    segundos++;
    
    // Logica de contagem de tempo
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
    
    atualizarDisplay(); // Atualiza o display de acordo com a contaagem de tempo

  }
  
  verificarBotoes(); // Verifica os botões físicos (Precionamento)
  ajustarHoraSerial(); // Verifica ajuste serial (Comandos)

}

void atualizarDisplay() {

  // Formata horas e minutos em 4 digitos (HHMM)
  int valorDisplay = horas * 100 + minutos;
  display.print(valorDisplay, DEC);

  // Faza os dois pontos piscarem a cada segundo
  bool pontos = segundos % 2 == 0;
  display.drawColon(pontos);
  display.writeDisplay();

}

//Ajustar hora por monitor serial
void ajustarHoraSerial() {

  if(Serial.available()) {
    String input = Serial.readStringUntil('\n');
    
    // Permite o ajuste da hora via monitor serial com o comando "SET HH:MM"
    if(input.startsWith("SET ")) {
      int h = input.substring(4,6).toInt();
      int m = input.substring(7,9).toInt();
      
      // Atualiza o relogio e dá feedback no monitor serial
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

// Ajuste de horas por meio de botões
/* Im´lementa 4 blocos identicos um para cada botão:
  -Incrementa / decrementa horas/minutos
  -Reseta segundos para manter sincronismo
  -Dá feedback pelo monitor serial
  -Atualiza o display
  -E aguarda até soltar o botão 
*/
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

    if (horas > 0){
      if(digitalRead(btnhora_menos) == LOW) {
        horas = (horas - 1) % 24;
        segundos = 0;
        Serial.print("Hora ajustada para: ");
        Serial.println(horas);
        atualizarDisplay();
        while(digitalRead(btnhora_menos) == LOW);
      }
    }else{
      segundos = 0;
      Serial.print("Valor minimo possivel para horas: ");
      Serial.println(horas);
      atualizarDisplay();
      while(digitalRead(btnhora_menos) == LOW);
    }
    
  }

  // Ajuste de minutos para menos
  if(digitalRead(btnminuto_menos) == LOW) {
    delay(50);

    if(minutos > 0){
      if(digitalRead(btnminuto_menos) == LOW) {
        minutos = (minutos - 1) % 60;
        segundos = 0;
        Serial.print("Minuto ajustado para: ");
        Serial.println(minutos);
        atualizarDisplay();
        while(digitalRead(btnminuto_menos) == LOW);
      }
    }else{
      segundos = 0;
      Serial.print("Valor minimo possivel para minutos : ");
      Serial.println(minutos);
      atualizarDisplay();
      while(digitalRead(btnminuto_menos) == LOW);
    }
    
  }
}