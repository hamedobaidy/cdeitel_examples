/*
 ============================================================================
 Name        : cdeitel_fig02_05.c
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

// Fig. 2.5: fig02_05.c
// Addition program.
#include <stdio.h>
#include <stdlib.h>

// function main begins program execution
int main(void) {
	int integer1; // first number to be entered by user
	int integer2; // second number to be entered by user
	int sum; // variable in which sum will be stored

	printf("Enter first integer\n"); // prompt
	scanf("%d", &integer1); // read an integer

	printf("Enter second integer\n"); // prompt
	scanf("%d", &integer2); // read an integer

	sum = integer1 + integer2; // assign total to sum
	printf("Sum is %d\n", sum); // print sum

	return EXIT_SUCCESS;
}
