#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include <conio.h>

void day() {
	do {
		ledOff(LD6);
		ledOn(LD5);
		Wait(3000);
		ledOff(LD5);
		Wait(300);
		ledOn(LD6);
		Wait(3000);
		ledOff(LD6);
	} while (!_kbhit() || keyPressed(P1) || getIntensity() <= 40);
};

void footwalker() {
	do {
		day();
		if (keyPressed(P1) == 1) {
			ledOff(LD5);
			Wait(300);
			ledOn(LD6);
			Wait(3000);
		}
		day();
	} while (!_kbhit);
};

void evening() {
	do {
		day();
		if (getIntensity() <= 40) {
			ledOff(LD5);
			Wait(300);
			ledOn(LD6);
			Wait(3000);
		}
		day();
	} while (!_kbhit);
};

int main(void)
{
	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}
	else {
		printf("Connected to Raspberry Pi\n");
	}




	char trafikType;
	scanf_s("\n%c", &trafikType, 1);


	switch (trafikType) {
	case 'd':
		day();
		break;
	case 'a':
		footwalker();
		break;
	case 'l':
		evening();
		break;
	default:

		break;
	}

	return 0;
}
