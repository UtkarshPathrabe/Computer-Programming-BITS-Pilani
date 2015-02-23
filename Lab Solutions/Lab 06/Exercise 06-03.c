#include <stdio.h>

int main (void) {
	int i, j, N;
	printf ("Enter the number of rows you want:\t");
	scanf ("%d", &N);
	for (i = N; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf ("%d ", i);
		}
		printf ("\n");
	}
	return 0;
}
