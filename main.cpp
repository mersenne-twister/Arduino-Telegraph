#include <Arduino.h>
#include <Keypad.h>

byte constexpr ROWS{4};
byte constexpr COLS{4};

byte rowPins[ROWS]{9, 8, 7, 6}; //byte array can't be const
byte colPins[COLS]{5, 4, 3, 2};

char constexpr keys[ROWS][COLS]{
	{'1', '2', '3', '/'},
	{'4', '5', '6', '*'},
	{'7', '8', '9', '-'},
	{'_', '0', '.', '+'} //underscore represents negative instead of subtraction, and will still print out '-'
};

Keypad keypad{Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS)};

void setup()
{
	Serial.begin(9600);

	pinMode(11, INPUT);
}

void loop()
{
	Serial.println(A0);
	// static int i{0};

	// if (digitalRead(11)) {
	// 	digitalWrite(13, 1);
	// 	delay(50);
	// } else {
	// 	digitalWrite(13, 0);
	// }

	// if (digitalRead(12)) {
	// 	Serial.print("Input detected");
	// 	Serial.println(i);
	// }



	// char pressedKey{keypad.getKey()};
	
	// if (pressedKey)
	// 	;
	// 	//Serial.println(pressedKey);
	// ++i;
}


//first task:
//	make sound when button pressed

//2:
//	make sound on multiple arduinos when button pressed

//3: 
//	make interoperable circuit for all three

//4:
//	be able to type text into lcd

//5:
//	when you press enter, that automatically gets translated into morse code and sent

//6:
//	decode that morse code and print to lcd (and anything sent manually)

//FOR LCD: RECEIVED MESSAGE ON TOP, TYPED MESSAGE ON BOTTOM