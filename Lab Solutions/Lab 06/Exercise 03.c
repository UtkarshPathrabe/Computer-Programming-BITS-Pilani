#include <stdio.h>

int main (void) {
	int a = 0, b = 1, fib, N, i;
	printf ("Enter the number of terms of Fibonacci Series you want(N > 3):\t");
	scanf ("%d", &N);
	printf ("%d ", a);
	for (i = 1; i < N; i++) {
		fib = a + b;
		printf ("%d ", fib);
		b = a;
		a = fib;
	}
	return 0;
}
