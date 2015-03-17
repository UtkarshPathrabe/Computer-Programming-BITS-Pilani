#include <stdio.h>

int main (void) {
	int i, j, n = 10, temp, Array[10] = {9, 7, 4, 8, 1, 6, 2, 5, 3, 0};
	for (i = 1; i < n; i++) {
		j = i;
		while ((Array[j] < Array[j-1]) && (j > 0)) {
			temp = Array[j-1];
			Array[j-1] = Array[j];
			Array[j] = temp;
			j--;
		}
		temp = Array[i];
		Array[i] = Array[j];
		Array[j] = temp;
	}
	printf ("The Sorted Array is:\n");
        for (i = 0; i < n; i++) {
                printf ("%d\t", Array[i]);
        }
        printf ("\n");
	return 0;
}
