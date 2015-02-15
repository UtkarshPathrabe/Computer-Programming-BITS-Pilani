#include <stdio.h>
#include <math.h>

int main (void) {
	int n, a, b, ans;
	printf ("Enter value of a, b and n:\t");
	scanf ("%d %d %d", &a, &b, &n);
	ans = pow ((a + b), n);
	printf ("The Answer is %d\n", ans);
	return 0;
}
