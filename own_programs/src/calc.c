#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	if (argc != 4) {
		printf("Incorrect amount of arguments. num1, operator, num2\n");
		return 1;
	}
	float num1 = atoi(argv[1]);
	char operator = *argv[2];
	float num2 = atoi(argv[3]);
	float result;

	switch (operator) {
		case '+':
			result = num1 + num2;
			printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);
			break;
		case '-':
			result = num1 - num2;
			printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);
			break;
		case '*':
			result = num1 * num2;
			printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);
			break;
		case '/':
			result = num1 / num2;
			printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);
			break;
		default:
			printf("Invalid operator\n");
	}
	return 0;
}
