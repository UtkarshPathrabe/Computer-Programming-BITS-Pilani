/* Factorial of a number */

#include <stdio.h>

int main (void) {
	int n, fact = 1, i;
	printf ("Enter a number:\t");
	scanf ("%d", &n);
	for (i = 1; i <= n; i++) {
		fact *= i;
	}
	printf ("%d is the factorial of %d.\n", fact, n);
	return 0;
}
