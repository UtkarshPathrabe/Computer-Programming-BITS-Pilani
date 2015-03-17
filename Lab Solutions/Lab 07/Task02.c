#include <stdio.h>

int main (void) {
	int i, j = 0, n = 10, A[10] = {1, 2, 3 ,4, 5, 6, 7, 8, 9, 10}, B[10] = {0};
	for (i = 0; i < n; i = i + 2) {
		B[j++] = A[i];
	}
	for (i = i - 1 ; i > 0; i = i - 2) {
		B[j++] = A[i];
	}
	printf ("Array A elements are : \n"); 
	for (i = 0; i < n; i++) {
		printf ("%d\t", A[i]);
	}
	printf ("\nArray B elements are : \n");
        for (i = 0; i < n; i++) {
                printf ("%d\t", B[i]);
        }
	printf ("\n");
	return 0;
}
