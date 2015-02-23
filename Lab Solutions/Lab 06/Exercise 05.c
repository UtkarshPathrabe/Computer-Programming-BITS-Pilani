#include <stdio.h>

int main (void) {
	int count = 0, num = 2, div, N, isPrime = 1;
	printf ("How many prime numbers do you want?\t");
	scanf ("%d", &N);
	while (count < N) {
		isPrime = 1;
		for (div = 2; div < num; div++) {
			if (num % div == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime) {
			printf ("%d ", num);
			count++;
		}
		num++;
	}
	printf ("\n");
	return 0;
}
