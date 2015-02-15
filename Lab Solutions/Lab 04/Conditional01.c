#include <stdio.h>

int main (void) {
	int a, b, c, min;
	printf ("Enter Three Numbers:\t");
	scanf("%d %d %d", &a, &b, &c);
	min = (a < b ? (a < c ? a :c) : (b < c ? b : c));
	printf("Min = %d\n", min);
	return 0;
}
