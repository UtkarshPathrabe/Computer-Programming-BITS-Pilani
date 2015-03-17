#include <stdio.h>

int reverse (int n) {
	int rev = 0;
	while (n) {
		rev *= 10;
		rev += (n % 10);
		n /= 10;
	}
	return rev;
}

int main (void) {
	int n;
	printf ("Enter a number:\t");
	scanf ("%d", &n);
	printf ("The reverse of %d is %d.\n", n, reverse(n));
	return 0;
}
