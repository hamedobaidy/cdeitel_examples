/*
 ============================================================================
 Name        : cdeitel_fig04_02.c
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

// Fig. 4.2: fig04_02.c
// Counter-controlled repetition with the for statement.

#include <stdio.h>
#include <stdlib.h>

// function main begins program execution
int main(void) {
	unsigned int counter; // define counter

	// initialization, repetition condition, and increment
	// are all included in the for statement header.
	for (counter = 1; counter <= 10; ++counter) {
		printf("%u\n", counter);
	} // end for

	return EXIT_SUCCESS;
}
