#include <stdio.h>

int main (void) {
	int count;
	for (count = 1; count <= 5; count++) {
		int i;
		for (i = 4; i >= 1; i--) {
			if ((count - i) > 0) {
				printf ("%d ", count - i);
			} else {
				printf ("  ");
			}
		}
		for (i = 0; i < 5; i++) {
			if ((count - i) > 0) {
				printf ("%d ", count - i);
			} else {
				printf ("  ");
			}
		}
		printf ("\n");
	}
	for (count = 4; count >= 1; count--) {
		int i;
		for (i = 4; i >= 1; i--) {
			if ((count - i) > 0) {
				printf ("%d ", count - i);
			} else {
				printf ("  ");
			}
		}
		for (i = 0; i < 5; i++) {
			if ((count - i) > 0) {
				printf ("%d ", count - i);
			} else {
				printf ("  ");
			}
		}
		printf ("\n");
	}
	return 0;
}
