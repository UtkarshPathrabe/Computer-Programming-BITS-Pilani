#include <stdio.h>

int main (void) {
	double R, A;
	printf ("Enter the radius of the circle:\t");
	scanf ("%lf", &R);
	A = 22 * R * R / 7;
	printf ("The Area of the Circle is %lf\n", A);
	return 0;
}
