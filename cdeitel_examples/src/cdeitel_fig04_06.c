/*
 ============================================================================
 Name        : cdeitel_fig04_06.c
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// function main begins program execution
int main(void) {
	double amount; // amount on deposit
	double principal = 1000.0; // starting principal
	double rate = .05; // annual interest rate
	unsigned int year; // year counter

	// output table column heads
	printf("%4s%21s\n", "Year", "Amount on deposit");

	// calculate amount on deposit for each of ten years
	for (year = 1; year <= 10; ++year) {

		// calculate new amount for specified year
		amount = principal * pow(1.0 + rate, year);

		// output one table row
		printf("%4u%21.2f\n", year, amount);
	} // end for

	return EXIT_SUCCESS;
}
