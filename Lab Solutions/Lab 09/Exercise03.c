#include <stdio.h>

void frequencyDist (int array[], int freq[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		freq[array[i] - 1]++;
	}
}

int main () {
	int array[] = {1, 2, 3, 4, 5, 2, 3, 4, 5, 3, 4, 5, 4, 5, 1, 2, 3, 4, 5, 2, 3, 4, 5, 3, 4, 5, 4, 5, 1, 2, 3, 4, 5, 2, 3, 4, 5, 3, 4, 5, 4, 5, 1, 2, 3, 4, 5, 2, 3, 4};
	int freq[] = {0, 0, 0, 0, 0};
	int size = 50, i;
	frequencyDist (array, freq, size);
	for (i = 0; i < 5; i++) {
		printf ("%d\t->\t%d\n", i+1, freq[i]);
	}
	printf ("\n");
	return 0;
}