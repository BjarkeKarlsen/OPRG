#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include "RPi_LED.h"
#include <conio.h>
using namespace std;

namespace ligthControl {
	void turnOffLED() {							//LED turn off via. forloop
		for (int x = 1; x <= 6; x++) {
			ledOff(x);
		}

	}

	void turnOnLED() {
		char input;
		int x = 0;
		do {									//Di-Whileloop når der ikke er trykket tasten 0
			scanf_s("\n%c", &input, 1);			// tager et input
			if (x != 0) {						//Slukker den sidste LED der var tændt undtaget den første omgang i do-Whileloppet
				ledOff(x);
			}

			switch (input) {					//Tager input og tjekker i forhold til
			case ('1'):
				ledOn(LD1);						//Turn ligth ON
				x = 1;							//For at slukket lyst ved næste do-whileloop
				break;
			case ('2'):
				ledOn(LD2);
				x = 2;
				break;
			case ('3'):
				ledOn(LD3);
				x = 3;
				break;
			case ('4'):
				ledOn(LD4);
				x = 4;
				break;
			case ('5'):
				ledOn(LD5);
				x = 5;
				break;
			case ('6'):
				ledOn(LD6);
				x = 6;
				break;
			default:
				break;
			}

		} while (input != '0');
	}
}
