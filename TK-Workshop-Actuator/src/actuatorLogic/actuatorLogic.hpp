#ifndef ACTUATORLOGIC_HPP
#define ACTUATORLOGIC_HPP
#define BUZZER_PIN 27
#define LED1 17
#define LED2 18 // GPIO pin for the buzzer

#include <Arduino.h>

void actuatorOnWriteLogic(std::string value);

#endif