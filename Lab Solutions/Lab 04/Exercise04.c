#include <stdio.h>

int main (void) {
	double d, u, t, a;
	printf ("Enter the values of u, t and a:\t");
	scanf ("%lf %lf %lf", &u, &t, &a);
	d = (u * t) + ((a * t * t) / 2);
	printf ("The Distance travelled is %lf\n", d);
	return 0;
}
