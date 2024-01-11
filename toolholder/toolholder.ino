void setup() {
  Serial.begin(115200); // Начинаем серийную связь на скорости 9600 бод
}

void loop() {
  if (Serial.available()>0) { // Если есть доступные данные для чтения
    String data = Serial.readStringUntil('\n'); // Читаем входные данные

    if (data == "?RDY$") {
      Serial.println("!OK$"); // Отправляем "!OK$" если получено "?RDY$"
    } 
    else if (data == "?T1$") {
      Serial.println("!T1$"); // Вызывать в конце отработки смены инструмента
    } 
    else if (data == "?T2$") {
      Serial.println("!T2$"); // Вызывать в конце отработки смены инструмента
    }
  }
}
