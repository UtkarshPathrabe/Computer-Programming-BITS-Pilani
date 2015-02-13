#include <stdio.h>

int main (void) {
	int year;
	printf ("Enter the Year:\t");
	scanf ("%d", &year);
	if ((year > 2000) && (year < 2101)) {
		if (((year % 100 == 0) && (year % 400 == 0)) || ((year % 100 != 0) && (year % 4 == 0))) {
			printf ("%d is a leap year of 21st Century.\n", year);
		} else {
			printf ("%d is not a leap year of 21st Century.\n", year);
		}
	} else {
		printf ("%d is not a year of the 21st Century.\n", year);
	}
	return 0;
}
