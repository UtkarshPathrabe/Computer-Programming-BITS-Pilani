#include <stdio.h>

void deleteDuplicate (int array[], int *size) {
	int i, j, k, key, temp;
	for (i = 0; i < *size; i++) {
		key = array[i];
		for (j = i + 1; j < *size; j++) {
			if (key == array[j]) {
				for (k = j; k < ((*size) - 1); k++) {
					array[k] = array[k + 1];
				}
				*size -= 1;
			}
		}
	}
}

int main () {
	int array[] = {2, 3, 6, 9, 10, 3, 8, 2, 9, 10, 3, 8, 1, 4, 5};
	int size = 15, i;
	for (i = 0; i < size; i++) {
		printf ("%d\t", array[i]);
	}
	printf ("\n");
	deleteDuplicate (array, &size);
	for (i = 0; i < size; i++) {
		printf ("%d\t", array[i]);
	}
	printf ("\n");
	return 0;
}