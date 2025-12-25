#include <stdio.h>

#define LOWER 0		// Lower limit of table
#define UPPER 300	// Upper limit of table
#define STEP 20		// Step size

void version1();
void version2();
void celsius_to_fahrenheit();

// Print fahrenheit-celsius table for fahr = 0, 20, ..., 300
int main() {
	version1();
	version2();
	celsius_to_fahrenheit();
}

void version1() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = upper;

	printf("---FAHRENHET TO CELSIUS TABLE---\n");
	while (fahr >= lower) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr - step;
	}
}

void version2() {
	int fahr;
	printf("---FAHRENHET TO CELSIUS TABLE---\n");
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32.0));
}

void celsius_to_fahrenheit() {
	int celsius;
	printf("---CELSIUS TO FAHRENHEIT TABLE---\n");
	for (celsius = LOWER; celsius <= UPPER; celsius += STEP)
		printf("%3d %6.1f\n", celsius, (9.0/5.0) * celsius + 32.0);
}

// CHANGES
// Added numbers beforbetween % and d in printf to give the numbers more room, and right-justify them.
// Converted to floating point arithmetic
// Added short for loop version
// Created celsius to fahrenheit function
// Made inverted table from 300 to 0
// Defined constants for magic numbers




