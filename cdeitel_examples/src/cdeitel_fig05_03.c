/*
 ============================================================================
 Name        : cdeitel_fig05_03.c
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int square(int y);

int main(void) {
	int x;

	for (x = 1; x <= 10; ++x) {
		printf("%d ", square(x));
	}

	puts("");

	return EXIT_SUCCESS;
}

int square(int y) {
	return y*y;
}
