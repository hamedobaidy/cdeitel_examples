/*
 ============================================================================
 Name        : cdeitel_fig03_13.c
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

// Fig. 3.13: fig03_13.c
// Preincrementing and postincrementing.

#include <stdio.h>
#include <stdlib.h>

// function main begins program execution
int main(void) {
	int c; // define variable

	// demonstrate postincrement
	c = 5; // assign 5 to c
	printf("%d\n", c); // print 5
	printf("%d\n", c++); // print 5 then postincrement
	printf("%d\n\n", c); // print 6

	// demonstrate preincrement
	c = 5; // assign 5 to c
	printf("%d\n", c); // print 5
	printf("%d\n", ++c); // preincrement then print 6
	printf("%d\n", c); // print 6

	return EXIT_SUCCESS;
}
