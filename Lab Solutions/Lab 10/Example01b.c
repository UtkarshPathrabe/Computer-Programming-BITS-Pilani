#include <stdio.h>

int main (void) {
	char col[2][8] = {"Red", "Blue"};
	int i, j;
	for (i = 0; i < 2; i++) {
		printf ("\n%d ", *(col + i));
		j = 0;
		while (*(*(col + i) + j) != '\0') {
			printf ("%c ", *(*(col + i) + j));
			j++;
		}
	}
	return 0;
}
