#include <stdio.h>

int main() {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\t')
			printf("\\t");
		else
			putchar(c);
	}
}
