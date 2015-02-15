#include <stdio.h>
#include <math.h>

int main (void) {
	double a, b, c, x1, x2;
	printf ("Enter the values of a, b, c:\t");
	scanf ("%lf %lf %lf", &a, &b, &c);
	x1 = (-b + sqrt((b*b) - (4*a*c))) / (2*a);
	x2 = (-b - sqrt((b*b) - (4*a*c))) / (2*a);
	printf ("the first root is %lf\nThe second root is %lf\n", x1, x2);
	return 0;
}
