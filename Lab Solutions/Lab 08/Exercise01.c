#include <stdio.h>
#include <math.h>

void rootsOfQuadraticEquation (double a, double b, double c) {
	double discriminant = pow (b, 2) - (4 * a * c), x1 = 0, x2 = 0;
	if (discriminant == 0) {
		x1 = (-b) / (2 * a);
		printf ("The Equation has real and equal roots and its value is %lf.\n", x1);
	} else if (discriminant < 0) {
		printf ("The Equation doesn't have real roots!\n");
	} else {
		x1 = (-b + sqrt (discriminant)) / (2 * a);
		x2 = (-b - sqrt (discriminant)) / (2 * a);
		printf ("The Equation has real and distinct roots and its values are %lf and %lf.\n", x1, x2);
	}
}

int main (void) {
	double a, b, c, x1, x2;
	printf ("Enter the coefficients a, b and c of the Quadratic Equation:\t");
	scanf ("%lf %lf %lf", &a, &b, &c);
	rootsOfQuadraticEquation (a, b, c);
	return 0;
}
