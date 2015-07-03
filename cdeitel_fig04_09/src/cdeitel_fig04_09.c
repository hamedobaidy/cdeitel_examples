/*
 ============================================================================
 Name        : cdeitel_fig04_09.c
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int counter = 1; // initialize counter
	do {
		printf("%u ", counter); // display counter
	} while (++counter <= 10);
	return EXIT_SUCCESS;
}
