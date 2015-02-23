#include <stdio.h>

int main (void) {
	int num, rev = 0, temp = 0;
	printf ("Enter a number:\t");
	scanf ("%d", &num);
	temp = num;
	while (temp) {
		rev *= 10;
		rev += (temp % 10);
		temp /= 10;
	}
	if (num == rev) {
		printf ("%d is a Palindrome.\n", num);
	} else {
		printf ("%d is not a Palindrome.\n", num);
	}
	return 0;
}
