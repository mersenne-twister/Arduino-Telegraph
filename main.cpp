#include <Arduino.h>

int constexpr buzzer{4};
int constexpr led{3};
int constexpr button{2};
int constexpr in{5};
int constexpr out{6};

void setup()
{
	Serial.begin(9600);
	
	pinMode(buzzer, OUTPUT);
	pinMode(led, OUTPUT);
	pinMode(button, INPUT);
	pinMode(in, INPUT);
	pinMode(out, OUTPUT);
}

void loop()
{
    if (digitalRead(button)) {
        digitalWrite(out, 1);
        Serial.println("button pressed");
        delay(50);
    } else {
        digitalWrite(out, 0);
    }
    
    if (digitalRead(in)) {
        digitalWrite(led, 1);
        digitalWrite(buzzer, 1);
        Serial.println("input detected");
    } else {
        digitalWrite(led, 0);
        digitalWrite(buzzer, 0);
    }
    
}
