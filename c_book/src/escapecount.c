#include <stdio.h>

int main() {
	int c, nl, nt, nb;
	nl = nt = nb = 0;

	while ((c = getchar()) != EOF) {
		switch (c) {
			case '\n':
				nl++;
				break;
			case '\t':
				nt++;
				break;
			case '\b':
				nb++;
				break;
		}
	}
	printf("lines: %d, tabs: %d, blanks: %d\n", nl, nt, nb);
}
