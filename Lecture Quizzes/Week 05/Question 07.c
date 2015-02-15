/* Write a program to print the following series and also find out the sum of series.
1 + 22 + 333 + 4444 +.................. + N terms */

#include <stdio.h>

int main (void) {
	long long int N, i, j, sum = 0, num;
	printf ("Enter the value of N:\t");
	scanf ("%lld", &N);
	printf ("The Series is:\t");
	for (i = 1; i <= N; i++) {
		num = 0;
		for (j = 0; j < i; j++) {
			num += i;
			num *= 10;
		}
		num /= 10;
		printf ("%lld ", num);
		sum += num;
	}
	printf ("\nThe sum of the above series is %lld\n", sum);
	return 0;
}
