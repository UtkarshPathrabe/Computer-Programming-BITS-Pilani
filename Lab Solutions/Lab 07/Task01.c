#include <stdio.h>

int main (void) {
	int i, n, a[25], l1 = -99999, l2 = -99999, l3 = -99999;
	printf ("Enter the number of elements(<26):\t");
	scanf ("%d", &n);
	printf ("Enter %d values:\t", n);
	for (i = 0; i < n; i++) {
		scanf ("%d", &a[i]);
		if (a[i] > l1) {
			l3 = l2;
			l2 = l1;
			l1 = a[i];
		} else if (a[i] > l2) {
			l3 = l2;
			l2 = a[i];
		} else if (a[i] > l3) {
			l3 = a[i];
		}
	}
	printf ("Largest Number : %d\nSecond Largest Number : %d\nThird Largest Number : %d\n", l1, l2, l3);
	return 0;
}
