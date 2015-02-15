#include <stdio.h>

int main (void) {
	int total = 65, n = 7;
	float average;
	average = total / n;
	printf ("Average = %f\n",average);
	average = (float)total / n;
	printf ("Average = %f\n",average);
	return 0;
}
