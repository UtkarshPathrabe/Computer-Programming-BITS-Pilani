/* Write a program to take marks of all the students of a class and print the average, highest, and lowest marks. Do not use arrays here. Compute the three things as the user input each marks. */

#include <stdio.h>

int main (void) {
	int marks, n, max = -99999, min = 99999, avg = 0, i;
	printf ("Enter the number of students in the class:\t");
	scanf ("%d", &n);
	for (i = 0; i < n; i++) {
		printf ("Enter student %d marks:\t", i + 1);
		scanf ("%d", &marks);
		if (marks > max) {
			max = marks;
		}
		if (marks < min) {
			min = marks;
		}
		avg += marks;
	}
	printf ("The maximum marks are %d\nThe minimum marks are %d\nThe average marks are %f\n", max, min, (float)avg / n);
	return 0;
}
