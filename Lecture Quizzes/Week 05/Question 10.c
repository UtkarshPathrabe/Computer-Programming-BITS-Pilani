#include <stdio.h>

int main (void) {
	int count;
	for (count = 6; count > 1; count--) {
		int i;
		for (i = 1; i <= 5; i++) {
			if ((count - i) > 0) {
				printf ("%d ", i);
			} else {
				printf ("  ");
			}
		}
		for (i = 5; i >= 1; i--) {
			if ((count - i) > 0) {
				printf ("%d ", i);
			} else {
				printf ("  ");
			}
		}
		printf ("\n");
	}
	return 0;
}
