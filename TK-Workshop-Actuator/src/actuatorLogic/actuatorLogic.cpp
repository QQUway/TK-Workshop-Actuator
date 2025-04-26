#include "actuatorLogic.hpp"

void actuatorOnWriteLogic(std::string value)
{
    if (value.length() > 0)
    {
        Serial.println(value.c_str());

        if (value.compare("1") == 0)
        {
            Serial.println("Masuk");
            digitalWrite(BUZZER_PIN, HIGH);
            digitalWrite(LED1, HIGH);
            delay(500); // buzz for 500ms
            digitalWrite(BUZZER_PIN, LOW);
            digitalWrite(LED1, LOW);
            Serial.println("Masuk selesai");
        }
        else if (value.compare("0") == 0)
        {
            Serial.println("Masuk");
            digitalWrite(BUZZER_PIN, HIGH);
            digitalWrite(LED2, HIGH);
            delay(500); // buzz for 500ms
            digitalWrite(BUZZER_PIN, LOW);
            digitalWrite(LED2, LOW);
            Serial.println("Masuk selesai");
        }
        else
        {
            Serial.println("Kaga Masuk");
            digitalWrite(BUZZER_PIN, LOW);
            delay(250); // buzz for 500ms
            digitalWrite(BUZZER_PIN, LOW);
            delay(250); // buzz for 500ms
            digitalWrite(BUZZER_PIN, LOW);
            Serial.println("kaga masuk selesai");
        }
    }
}