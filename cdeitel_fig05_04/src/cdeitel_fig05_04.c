/*
 ============================================================================
 Name        : cdeitel_fig05_04.c
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int maximum(int, int, int);

int main(void) {
	int number1, number2, number3;

	printf("%s", "Enter three integers: ");
	scanf("%d%d%d", &number1, &number2, &number3);

	printf("Maximum is %d\n", maximum(number1, number2, number3));

	return EXIT_SUCCESS;
}

int maximum(int x, int y, int z) {
	int max = x; // assume x is largest

	if (y > max) { // if y is larger than max,
		max = y; // assign y to max
	} // end if

	if (z > max) { // if z is larger than max,
		max = z; // assign z to max
	} // end if

	return max; // max is largest value
}
