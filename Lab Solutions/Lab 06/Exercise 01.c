#include <stdio.h>

int main (void) {
	int n, temp, sum = 0;
	printf ("Enter any interger:\t");
	scanf ("%d", &n);
	temp = n;
	while (temp) {
		sum += (temp % 10);
		temp /= 10;
	}
	printf ("%d\n", sum);
	return 0;
}
