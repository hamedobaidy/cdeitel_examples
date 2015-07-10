/*
 ============================================================================
 Name        : cdeitel_fig04_01.c
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

// Fig. 4.1: fig04_01.c
// Counter-controlled repetition.

#include <stdio.h>
#include <stdlib.h>

// function main begins program execution
int main(void) {
	unsigned int counter = 1; // initialization

	while (counter <= 10) { // repetition condition
		printf("%u\n", counter); // display counter
		++counter; // increment
	} // end while

	return EXIT_SUCCESS;
}
