#include <stdio.h>

int FindMinIndex (int A[], int n, int j) {
	int i, minIndex = j, min = A[j];
	for (i = j + 1; i < n; i++) {
		if (min > A[i]) {
			min = A[i];
			minIndex = i;
		}
	}
	return minIndex;
}

int main (void) {
	int i, temp, minIndex, n = 10, Array[10] = {9, 7, 4, 8, 1, 6, 2, 5, 3, 0};
	for (i = 0; i < n - 1; i++) {
		minIndex = FindMinIndex (Array, n, i);
		temp = Array[i];
		Array[i] = Array[minIndex];
		Array[minIndex] = temp;
	}
	printf ("The Sorted Array is:\n");
	for (i = 0; i < n; i++) {
		printf ("%d\t", Array[i]);
	}
	printf ("\n");
	return 0;
}
