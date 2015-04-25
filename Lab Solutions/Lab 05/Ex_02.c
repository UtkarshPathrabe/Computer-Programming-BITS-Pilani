#include <stdio.h>
#include <math.h>

int main (void) {
	int a, b, c;
	printf ("Enter the three sides of the triangle:\t");
	scanf ("%d %d %d", &a, &b, &c);
	if (a + b > c) {
		if (b + c > a) {
			if (c + a > b) {
				float s = (float)(a + b + c) / 2.0;
				float area = sqrt (s * (s - a) * (s - b) * (s - c));
				printf ("Semiperimeter = %f\nArea = %f\n", s, area);
			}
		}
	}
	return 0;
}
