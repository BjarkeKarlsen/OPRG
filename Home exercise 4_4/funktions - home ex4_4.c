#include "funktions - home ex4_4.h"

int calculateSeconds(int hours, int minutes, int seconds)
{
	int totalSeconds = ((hours * 60) + minutes)*60 + seconds;
	return totalSeconds;
}