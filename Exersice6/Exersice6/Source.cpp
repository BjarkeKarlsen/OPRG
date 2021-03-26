#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <conio.h>
using namespace std;
#define INPUT_SIZE = 40;


int countString(char _inputword[40]) {
	int index = 0;
	while (_inputword[index] != '\0') {
		index++;
	}
	return index;
}

void callFunk() {
	char inputword[40];
	printf_s("Write a word and then you get to know how many letter er in it\n");
	gets_s(inputword, 40);
	int letters = countString(inputword);
	printf_s("This is %d letters word is made of", letters);
}


int main(void) {
	callFunk();

}