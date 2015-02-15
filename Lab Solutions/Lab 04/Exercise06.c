#include <stdio.h>

int main (void) {
	double a, b;
	scanf ("%lf %lf", &a, &b);
	printf ("The Sum is :\t%lf\nThe Difference is :\t%lf\nThe Product is :\t%lf\nThe Quotient is :\t%lf\n", a + b, a - b, a * b, a / b);
	return 0;
}
