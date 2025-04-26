#include "abstractBLE\abstractBLE.hpp"
#include "actuatorLogic\actuatorLogic.hpp"
// #define SERVICE_UUID "4869e6e5-dec6-4a9d-a0a4-eda6b5448b97"
// #define CHARACTERISTIC_UUID "05c4d03a-ac78-4627-8778-f23fab166ba8"
// #define fakevalue "1" // fake value for testing
// #define BUZZER_PIN 27
// #define LED1 17
// #define LED2 18 // GPIO pin for the buzzer

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
  initializeServerBLE("BELE");
  initializeService("4869e6e5-dec6-4a9d-a0a4-eda6b5448b97");
  initializeCharacteristic("05c4d03a-ac78-4627-8778-f23fab166ba8");
  advertiseBLE("4869e6e5-dec6-4a9d-a0a4-eda6b5448b97");
  Serial.println("Characteristic defined! Now you can read it in your phone!");
}

void loop()
{
  // put your main code here, to run repeatedly:
  delay(2000);
}