/* Fibonacci Numbers up to n */

#include <stdio.h>

int main (void) {
	int n, a = 0, b = 1, fib;
	printf ("Enter a number:\t");
	scanf ("%d", &n);
	printf ("%d ", a);
	fib = a + b;
	while (fib <= n) {
		printf ("%d ", fib);
		b = a;
		a = fib;
		fib = a + b;
	}
	printf ("\n");
	return 0;
}
