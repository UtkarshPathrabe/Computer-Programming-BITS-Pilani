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

double cosineSum (double x, int N) {
	int i, sign = 1;
	double sum = 0;
	for (i = 0; i < N; i++) {
		sum += (double)(sign * pow (x, (2 * i)) / (double)fact (2 * i));
		sign *= -1;
	}
	return sum;
} 

int main () {
	int n;
	double x;
	printf ("Enter value of X and N:\t");
	scanf ("%lf %d", &x, &n);
	printf ("The Sum of the Sine Series of %d number is %lf.\n", n, cosineSum(x, n));
	return 0;
}
