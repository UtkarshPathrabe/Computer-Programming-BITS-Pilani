#include <stdio.h>

int main (void) {
	int month;
	printf ("Enter the month number:\t");
	scanf ("%d", &month);
	if (month > 12 || month < 1) {
		printf ("****ERROR****\nDoes Such a month exist in your calender?\nSorry but it doesn't exist in mine!\n");
	} else if (month == 4 || month == 6 || month == 9 || month == 11) {
		printf ("%d Month has 30 Days.\n", month);
	} else if (month == 2) {
		printf ("Please enter the year:\t");
		int year;
		scanf ("%d", &year);
		if (((year % 100 == 0) && (year % 400 == 0)) || ((year % 100 != 0) && (year % 4 == 0))) {
			printf ("%d Month has 29 Days.\n", month);
		} else {
			printf ("%d Month has 28 Days.\n", month);
		}
	} else {
		printf ("%d Month has 31 Days.\n", month);
	}
	return 0;
}
