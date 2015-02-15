/* To print sum of digits of a number */

#include <stdio.h>

int main (void) {
	int n, sum = 0, temp;
	printf ("Enter a number:\t");
	scanf ("%d", &n);
	temp = n;
	while (temp) {
		sum += (temp % 10);
		temp /= 10;
	}
	printf ("%d is the sum of digits of %d.\n", sum, n);
	return 0;
}
