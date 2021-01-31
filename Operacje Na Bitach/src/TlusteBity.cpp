//============================================================================
// Name        : TlusteBity.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

unsigned char bitfield;

//ustawia bit na wybranym miejscu liczac od konca
void setBit(char *a, int index) {

	*a |= (1 << index);

}

//zamienia 0 na 1 i odwrotnie w wybranym miejscu, liczac od prawej
char toggle(char a, int index) {

	a ^= 1 << index;
	return a;

}

//zamienia dane miejsce na 0
char clear(char a, int index) {

	a &= ~(1 << index);
	return a;

}

int main() {
	char bitfield = 65;

	setBit(&bitfield, 2);
	setBit(&bitfield, 4);
	setBit(&bitfield, 6);
	setBit(&bitfield, 2);

	return 0;
}
