#include "funktions - home ex4_1.h"

int getInteger(double number)
{
	return (int)number;
	
	// Alternativt:
	// int integer = number;
	// return integer;
}

double getDecimal(double number)
{
	return (number - (int)number);

	// Alternativt:
	 //int integer = number;
	 //return number - integer;
}