#include <stdio.h>

int main (void) {
	int a, b, c, sum;
	printf ("Enter value of a, b, c:\t");
	scanf ("%d %d %d", &a, &b, &c);
	sum = a + b + c;
	printf ("Sum = %d\n", sum);
	return 0;
}
