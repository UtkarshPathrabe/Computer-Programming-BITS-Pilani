#include <stdio.h>

int main (void) {
	int num = 2, div, prime;
	while (num <= 100) {
		prime = 1, div = 2;
		while (div < num) {
			if (num % div == 0) {
				prime = 0;
				break;
			}
			div++;
		}
		if (prime) {
			printf ("Number %d is prime.\n", num);
		}
		num++;
	}
	return 0;
}
