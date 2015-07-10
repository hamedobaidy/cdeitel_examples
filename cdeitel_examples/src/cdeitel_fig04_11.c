/*
 ============================================================================
 Name        : cdeitel_fig04_11.c
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int x; // counter
	// loop 10 times
	for (x = 1; x <= 10; ++x) {
		// if x is 5, terminate loop
		if (x == 5) {
			break; // break loop only if x is 5
		} // end if
		printf("%u ", x); // display value of x
	} // end for
	printf("\nBroke out of loop at x == %u\n", x);
	return EXIT_SUCCESS;
}
