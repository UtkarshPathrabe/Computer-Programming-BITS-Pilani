#include <stdio.h>

int main (void) {
	int i, j, N, count = 1;
	printf ("Enter the number of rows you want:\t");
	scanf ("%d", &N);
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= i; j++) {
			printf ("%d ", count++);
		}
		printf ("\n");
	}
	return 0;
}
