#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include "code functions.h" 


int main(void) {
	srand(time(0));												//Call time here to get two random codes
	char code1[CODE_SIZE + 1];									//Make array with size +1, because of 
	createCode(code1);
	printf_s("%s \n", code1);

	char code2[CODE_SIZE + 1];
	createCode(code2);
	printf_s("%s \n", code2);

	printf_s(checkCode(code1, code2) ? "true" : "false");

	changeCode(code1);

}