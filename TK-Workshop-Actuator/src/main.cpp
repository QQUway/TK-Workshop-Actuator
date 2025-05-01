#include "abstractBLE\abstractBLE.hpp"
#include "actuatorLogic\actuatorLogic.hpp"
#include "configBLE.hpp"

// class MyServerCallbacks : public BLEServerCallbacks
// {
//   void onConnect(BLEServer *pServer)
//   {
//     Serial.println("Client connected");
//   }

//   void onDisconnect(BLEServer *pServer)
//   {
//     Serial.println("Client disconnected");
//     BLEDevice::startAdvertising();
//   }
// };

// class MyCallbacks : public BLECharacteristicCallbacks
// {
//   void onWrite(BLECharacteristic *pCharacteristic)
//   {
//     std::string value = pCharacteristic->getValue();

//     if (value.length() > 0)
//     {
//       Serial.println(value.c_str());

//       if (value.compare("1") == 0)
//       {
//         Serial.println("Masuk");
//         digitalWrite(BUZZER_PIN, HIGH);
//         digitalWrite(LED1, HIGH);
//         delay(500); // buzz for 500ms
//         digitalWrite(BUZZER_PIN, LOW);
//         digitalWrite(LED1, LOW);
//         Serial.println("Masuk selesai");
//       }
//       else if (value.compare("0") == 0)
//       {
//         Serial.println("Masuk");
//         digitalWrite(BUZZER_PIN, HIGH);
//         digitalWrite(LED2, HIGH);
//         delay(500); // buzz for 500ms
//         digitalWrite(BUZZER_PIN, LOW);
//         digitalWrite(LED2, LOW);
//         Serial.println("Masuk selesai");
//       }
//       else
//       {
//         Serial.println("Kaga Masuk");
//         digitalWrite(BUZZER_PIN, LOW);
//         delay(250); // buzz for 500ms
//         digitalWrite(BUZZER_PIN, LOW);
//         delay(250); // buzz for 500ms
//         digitalWrite(BUZZER_PIN, LOW);
//         Serial.println("kaga masuk selesai");
//       }
//     }
//   }
// };

void setup()
{
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Serial.begin(115200);
  Serial.println("Starting BLE work!");
  initializeServerBLE(NAME_OF_ESP_BLE, bleServer);
  initializeService(SERVICE_UUID, bleService, bleServer);
  initializeCharacteristic(CHARACTERISTIC_UUID, bleCharacteristic, bleService);
  advertiseBLE(SERVICE_UUID, bleAdvertising);
  Serial.println("Characteristic defined! Now you can read it in your phone!");
}

void loop()
{
  // put your main code here, to run repeatedly:
  delay(2000);
}