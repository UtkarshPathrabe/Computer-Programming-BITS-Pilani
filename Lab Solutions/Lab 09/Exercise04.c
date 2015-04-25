#include <stdio.h>

void populateMarksArray (double marks[10][6]) {
	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 5; j++) {
			scanf ("%lf", &marks[i][j]);
		}
	}
}

void computeTotal (double marks[10][6]) {
	int i, j;
	double sum;
	for (i = 0; i < 10; i++) {
		sum = 0.0;
		for (j = 0; j < 6; j++) {
			if (j < 5) {
				sum += marks[i][j];
			} else {
				marks[i][j] = sum;
			}
		}
	}
}

double computeClassAverage (double marks[10][6]) {
	int i;
	double avg = 0;
	for (i = 0; i < 10; i++) {
		avg += marks[i][5];
	}
	avg /= 10;
	return avg;
}

double computeMaxTotal (double marks[10][6]) {
	int i;
	double max = -1.0;
	for (i = 0; i < 10; i++) {
		if (max < marks[i][5]) {
			max = marks[i][5];
		}
	}
	return max;
}

int main () {
	double marks[10][6];
	populateMarksArray (marks);
	computeTotal (marks);
	printf ("Class Average is %lf.\nMaximum marks is %lf.\n", computeClassAverage(marks), computeMaxTotal(marks));
	return 0;
}