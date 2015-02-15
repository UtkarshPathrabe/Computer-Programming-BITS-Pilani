/* Write a program to input a number and check whether the number is palindrome or not. */

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
	if (rev = n) {
		printf ("%d is a palindrome.\n", n);
	} else {
		printf ("%d is not a palindrome.\n", n);
	}
	return 0;
}
