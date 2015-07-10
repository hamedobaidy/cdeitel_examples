/*
 ============================================================================
 Name        : cdeitel_fig04_07.c
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int grade; // one grade
	unsigned int aCount = 0; // number of As
	unsigned int bCount = 0; // number of Bs
	unsigned int cCount = 0; // number of Cs
	unsigned int dCount = 0; // number of Ds
	unsigned int fCount = 0; // number of Fs

	puts("Enter the letter grades.");
	puts("Enter the EOF character to end input.");

	// loop until user types end-of-file key sequence
	while ((grade = getchar()) != EOF) {
		switch (grade) {
		case 'A':
		case 'a':
			++aCount;
			break;
		case 'B':
		case 'b':
			++bCount;
			break;
		case 'C':
		case 'c':
			++cCount;
			break;
		case 'D':
		case 'd':
			++dCount;
			break;
		case 'F':
		case 'f':
			++fCount;
			break;
		case '\n':
		case '\t':
		case ' ':
			break;
		default:
			printf("%s", "Incorrect letter grade entered.");
			puts(" Enter a new grade.");
			break;
		}
	}

	// output summary of results
	puts("\nTotals for each letter grades are:");
	printf("A: %u\n", aCount);
	printf("B: %u\n", bCount);
	printf("C: %u\n", cCount);
	printf("D: %u\n", dCount);
	printf("F: %u\n", fCount);
	return EXIT_SUCCESS;
}
