/*
 ============================================================================
 Name        : cdeitel_fig04_05.c
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int sum = 0; // initialize sum
	unsigned int number; // number to be added to sum

	for (number = 2; number <= 100; number += 2) {
		sum += number; // add number to sum
	} // end for
	printf("Sum is %u\n", sum); // output sum

	return EXIT_SUCCESS;
}
