#include <stdio.h>

int main (void) {
	int num, div, prime;
	for (num = 2; num <= 100; num++) {
		prime = 1;
		for (div = 2; div < num; div++) {
			if (num % div == 0) {
				prime = 0;
				break;
			}
		}
		if (prime) {
			printf ("Number %d is prime.\n", num);
		}
	}
	return 0;
}
