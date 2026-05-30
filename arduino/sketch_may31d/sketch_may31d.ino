#include <esp_now.h>
#include <WiFi.h>
#include <esp_wifi.h>

uint8_t New_MAC_Address[] = {0x10, 0xAA, 0xBB, 0xCC, 0x33, 0xF5};

// Structure example to receive data
// Must match the sender structure
typedef struct struct_message {
  float sensor1;
  float sensor2;
  float sensor3;
  float sensor4;
  float sensor5;
} struct_message;

struct_message incomingData;

// Callback when data is received
void OnDataRecv(const esp_now_recv_info_t *recv_info, const uint8_t *data, int len) {
  // Copy the received data into the incomingData structure
  memcpy(&incomingData, data, sizeof(incomingData));

  // Print the received sensor readings
  Serial.print(incomingData.sensor4);
  Serial.print("\t");
  Serial.print(incomingData.sensor2);
  Serial.print("\t");
  Serial.print(incomingData.sensor3);
  Serial.print("\t");
  Serial.print(incomingData.sensor1);
  Serial.print("\t");
  Serial.print(incomingData.sensor5);
  Serial.print("\t");
  Serial.print(28.5);
  Serial.println();
}


void setup() {
  // Init Serial Monitor
  Serial.begin(115200);
 
  // Set device as a Wi-Fi Station
  WiFi.mode(WIFI_STA);
  esp_wifi_set_mac(WIFI_IF_STA, New_MAC_Address);

  // Init ESP-NOW
  if (esp_now_init() != ESP_OK) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }

  // Register callback for receiving data
  esp_now_register_recv_cb(OnDataRecv);
}

void loop() {
  // Do nothing in the loop, data is received in the callback function
}
