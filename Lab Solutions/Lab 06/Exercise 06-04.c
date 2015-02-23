#include <stdio.h>
#include <math.h>

int main (void) {
	int N, i, j;
	printf ("Enter number of rows you want:\t");
	scanf ("%d", &N);
	for (i = 0; i <= N; i++) {
		for (j = -N; j <= N; j++) {
			if (abs(j) <= i) {
				printf ("%d", i);
			} else {
				printf (" ");
			}
		}
		printf ("\n");
	}
	return 0;
}
