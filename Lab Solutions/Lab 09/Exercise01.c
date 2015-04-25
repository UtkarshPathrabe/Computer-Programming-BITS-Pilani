#include <stdio.h>

void findQuadrant1 (int xCo[], int yCo[], int numPoints) {
	int i;
	for (i = 0; i < numPoints; i++) {
		if (xCo[i] == 0 && yCo[i] == 0) {
			printf ("Point %d is the Origin.\n", i);
		} else if (xCo[i] == 0 && yCo[i] != 0) {
			printf ("Point %d is on the Y Axis.\n", i);
		} else if (xCo[i] != 0 && yCo[i] == 0) {
			printf ("Point %d is on the X Axis.\n", i);
		} else if (xCo[i] > 0 && yCo[i] > 0) {
			printf ("Point %d is in 1st Quadrant.\n", i);
		} else if (xCo[i] < 0 && yCo[i] > 0) {
			printf ("Point %d is in 2nd Quadrant.\n", i);
		} else if (xCo[i] < 0 && yCo[i] < 0) {
			printf ("Point %d is in 3rd Quadrant.\n", i);
		} else {
			printf ("Point %d is in 4th Quadrant.\n", i);
		}
	}
}

void findQuadrant2 (int xCo[], int yCo[], int info[], int numPoints) {
	int i;
	for (i = 0; i < numPoints; i++) {
		if (xCo[i] == 0 && yCo[i] == 0) {
			info[i] = 0;
		} else if (xCo[i] == 0 && yCo[i] != 0) {
			info[i] = 1;
		} else if (xCo[i] != 0 && yCo[i] == 0) {
			info[i] = 2;
		} else if (xCo[i] > 0 && yCo[i] > 0) {
			info[i] = 3;
		} else if (xCo[i] < 0 && yCo[i] > 0) {
			info[i] = 4;
		} else if (xCo[i] < 0 && yCo[i] < 0) {
			info[i] = 5;
		} else {
			info[i] = 6;
		}
	}
}

int main () {
	int numPoints = 7, i;
	int xCo[] = {0, 0, 3, 4, -2, -1, 5};
	int yCo[] = {0, -2, 0, 8, 1, -4, -6};
	int info[numPoints];
	findQuadrant1 (xCo, yCo, numPoints);
	findQuadrant2 (xCo, yCo, info, numPoints);
	for (i = 0; i < numPoints; i++) {
		switch (info[i]) {
			case 0:	printf ("Point %d is the Origin.\n", i);		break;
			case 1:	printf ("Point %d is on the Y Axis.\n", i);		break;
			case 2:	printf ("Point %d is on the X Axis.\n", i);		break;
			case 3:	printf ("Point %d is in 1st Quadrant.\n", i);	break;
			case 4:	printf ("Point %d is in 2nd Quadrant.\n", i);	break;
			case 5:	printf ("Point %d is in 3rd Quadrant.\n", i);	break;
			case 6:	printf ("Point %d is in 4th Quadrant.\n", i);	break;
		}
	}
	return 0;
}