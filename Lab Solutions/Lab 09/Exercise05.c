#include <stdio.h>

void populateArray (int marks[5][11]) {
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 11; j++) {
			scanf ("%d", &marks[i][j]);
		}
	}
}

void sortRows (int marks[5][11], int courseNo) {
	int i, j, temp;
	for (i = 1; i < 11; i++) {
		for (j = i + 1; j < 11; j++) {
			if (marks[courseNo - 1][i] > marks[courseNo - 1][j]) {
				temp = marks[courseNo - 1][i];
				marks[courseNo - 1][i] = marks[courseNo - 1][j];
				marks[courseNo - 1][j] = temp;
			}
		}
	}
}

int main () {
	int marks[5][11], i, j;
	populateArray (marks);
	printf ("\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 11; j++) {
			printf ("%d ", marks[i][j]);
		}
		printf ("\n");
	}
	sortRows (marks, 2);
	sortRows (marks, 4);
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 11; j++) {
			printf ("%d ", marks[i][j]);
		}
		printf ("\n");
	}
	printf ("\n");
	return 0;
}