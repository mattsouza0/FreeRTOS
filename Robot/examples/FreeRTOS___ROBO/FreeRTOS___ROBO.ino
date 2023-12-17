#include "robot.h"

Robot robot(5, 8, 7, 6, 4, 3);

void setup() {
  Serial.begin(9600);

  // Iniciar tarefas para controlar o robô
  xTaskCreate(frenteTask, "FrenteTask", 256, NULL, 4, NULL);
  xTaskCreate(esquerdaTask, "EsquerdaTask", 256, NULL, 3, NULL);
  xTaskCreate(trasTask, "TrasTask", 128, NULL, 2, NULL);
  xTaskCreate(direitaTask, "DireitaTask", 128, NULL, 1, NULL);
}

void loop() {}

void frenteTask(void *pvParameters __attribute__((unused))) {
  while (true) {
    Serial.println("Movendo para frente");
    robot.paraFrente(255);
    vTaskDelay(5000 / portTICK_PERIOD_MS);
  }
}

void esquerdaTask(void *pvParameters __attribute__((unused))) {
  while (true) {
    Serial.println("Virando para esquerda");
    robot.paraEsquerda(255);
    vTaskDelay(3000 / portTICK_PERIOD_MS);
  }
}

void trasTask(void *pvParameters __attribute__((unused))) {
  while (true) {
    Serial.println("Movendo para tras");
    robot.paraTras(255);
    vTaskDelay(5000 / portTICK_PERIOD_MS);
  }
}

void direitaTask(void *pvParameters __attribute__((unused))) {
  while (true) {
    Serial.println("Virando para direita");
    robot.paraDireita(255);
    vTaskDelay(3000 / portTICK_PERIOD_MS);
  }
}
