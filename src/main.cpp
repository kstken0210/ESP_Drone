#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    delay(1000);
    
    Serial.println("\n===============================");
    Serial.println(" ESP32-S3 Basic Test");
    Serial.println("===============================");
    Serial.printf("Free Heap: %u bytes\n", ESP.getFreeHeap());
    Serial.printf("Chip Revision: %d\n", ESP.getChipRevision());
    Serial.printf("CPU Frequency: %d MHz\n", getCpuFrequencyMhz());
    
    // 測試 GPIO 32 是否可以正常使用
    pinMode(32, INPUT_PULLUP);
    int val = digitalRead(32);
    Serial.printf("GPIO 32 state: %d\n", val);
    
    Serial.println("System is stable!");
}

void loop() {
    delay(1000);
    Serial.print(".");
}