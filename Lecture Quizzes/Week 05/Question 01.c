/* Reverse of a number */

#include <stdio.h>

int main (void) {
	int n, rev = 0, temp;
	printf ("Enter a number:\t");
	scanf ("%d", &n);
	temp = n;
	while (temp) {
		rev *= 10;
		rev += (temp % 10);
		temp /= 10;
	}
	printf ("%d is the reverse of %d.\n", rev, n);
	return 0;
}
