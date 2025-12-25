#include <stdio.h>

void iocopy();
void iocopy_short();

int main() {
	iocopy_short();
}

void iocopy() {
	int c;
	c = getchar();

	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}

void iocopy_short() {
	int c;
	while ((c = getchar()) != EOF)
		putchar(c);
}
