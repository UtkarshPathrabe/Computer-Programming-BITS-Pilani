#include <stdio.h>

int main (void) {
	double P, R, T, I;
	printf ("Enter the principle, rate and time period:\t");
	scanf ("%lf %lf %lf", &P, &R, &T);
	I = (P * R * T) / 100;
	printf ("The Simple Interest is %lf\n", I);
	return 0;
}
