#include <stdio.h>
#include <math.h>

int main (void) {
	int N, i;
	double X, sum = 0.0;
	printf ("Enter the number of terms and the value of X:\t");
	scanf ("%d %lf", &N, &X);
	for (i = 1; i <= N; i++) {
		if (i % 2 == 1) {
			sum += pow (X, i) / sqrt (i);
		} else {
			sum -= pow (X, i) / sqrt (i);
		}
	}
	printf ("The sum of series is %lf\n", sum);
	return 0;
}
