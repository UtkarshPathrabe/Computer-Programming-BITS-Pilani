#include <stdio.h>

int main (void) {
	int i, j, n = 5, m = 10, marks[5][10];
	double  avgStu[5] = {0}, avgSub[10] = {0};
	for (i = 0; i < n; i++) {
		printf ("Enter the marks of %d Student in 10 Subjects:\t", i+1);
		for (j = 0; j < m; j++ ) {
			scanf ("%d", &marks[i][j]);
			avgStu[i] += marks[i][j];
			avgSub[j] += marks[i][j];
		}
	}
	printf ("The Average Marks of Students are as follows:\n");
	for (i = 0; i < n; i++) {
		printf ("Student %d :\t%lf\n", i+1, (double)avgStu[i]/m);
	}
	printf ("The Average Marks in Subjects are as follows:\n");
	for (j = 0; j < m; j++) {
		printf ("Subject %d :\t%lf\n", j+1, (double)avgSub[j]/n);
	}
	return 0;
}
