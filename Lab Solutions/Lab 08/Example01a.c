#include <stdio.h>
#include <math.h>

long long int fact (int N) {
	int i;
	long long int fact = 1;
	for (i = 2; i <= N; i++) {
		fact *= i;
	}
	return fact;
}

double seriesSum (double x, int N) {
	int i;
	double sum = x;
	for (i = 2; i <= N; i++) {
		if (i % 2 == 0) {
			sum += ((double)(pow (x, i)) / (double)fact (i + 1));
		} else {
			sum += (-1 * ((double)(pow (x, i)) / (double)fact (i)));
		}
	}
	return sum;
} 

int main () {
	int n;
	double x;
	printf ("Enter value of X and N:\t");
	scanf ("%lf %d", &x, &n);
	printf ("The Sum of the Sine Series of %d number is %lf.\n", n, seriesSum(x, n));
	return 0;
}
