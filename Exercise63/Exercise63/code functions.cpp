#include "code functions.h"

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>


void createCode(char codeAlias[])
{
	int index;
	int ascii;



	for (index = 0; index < CODE_SIZE; index++)
	{
		// We want values in the interval ['0' .. 'z']
		// Ascii '0' == 48
		// Ascii 'z' == 122 (inclusive)
		// Length of interval is 122 - 48 + 1 == 75
		// First value is '0' == 48
		ascii = (rand() % 75 + 48);

		// We only want upper and lower case letters and digits
		if ('0' <= ascii && ascii <= '9' || 'A' <= ascii && ascii <= 'Z' || 'a' <= ascii && ascii <= 'z')
			codeAlias[index] = ascii;
		else
			// We don't want this, redo it
			index--;
	}

	codeAlias[CODE_SIZE] = '\0';
}

bool checkCode(const char correctCodeAlias[], const char codeToCheckAlias[])
{
	// Fill in your own C code
	// return 1 when codes are equal
	int i = 0;
	int x = 0;
	while (correctCodeAlias[i] != '\0') {
		if (correctCodeAlias[i] == codeToCheckAlias[i]) {
			x++;
		}

		if (x == CODE_SIZE) {
			return true;
		}
		i++;
	}

	return false;
}


int changeCode(char currentCodeAlias[])
{
	// Fill in your own C code
	// Copy the new password to currentCodeAlias
	// and return 1 when the update was succesful
	char indexCode;
	char checkOldCode[CODE_SIZE + 1];
	printf_s("\n Write your old password:");
	password(checkOldCode);
	printf_s("\n %s \n", checkOldCode);

	if (true == checkCode(currentCodeAlias, checkOldCode)) {
		char newCode[CODE_SIZE + 1];

		printf_s("\n Write new password");
		password(newCode);
		printf_s("\n %s \n", newCode);


		char checkNewCode[CODE_SIZE + 1];
		printf_s("\n ");
		password(checkNewCode);
		printf_s("\n %s \n", checkNewCode);

		if (true == checkCode(newCode, checkNewCode)) {
			currentCodeAlias = newCode;
			printf_s("Your new password is: %s", currentCodeAlias);
		}
		else {
			printf_s("You wrote two different codes, try again");

		}
	}
	else {
		printf_s("Your password was wrong try again");
		changeCode(currentCodeAlias);
	}


	return 0;
}

void password(char password[]) {
	int indexCode;
	for (int i = 0; i < (CODE_SIZE); i++) {
		indexCode = _getch();
		password[i] = indexCode;
	}
	password[CODE_SIZE] = '\0';
}