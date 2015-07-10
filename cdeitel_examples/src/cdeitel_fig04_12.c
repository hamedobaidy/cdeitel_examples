/*
 ============================================================================
 Name        : cdeitel_fig04_12.c
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
		// if x is 5, continue with next iteration of loop
		if (x == 5) {
			continue; // skip remaining code in loop body
		} // end if
		printf("%u ", x); // display value of x
	} // end for
	puts("\nUsed continue to skip printing the value 5");
	return EXIT_SUCCESS;
}
