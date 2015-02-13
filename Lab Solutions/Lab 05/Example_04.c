#include <stdio.h>
#include <math.h>

int main (void) {
	double a, b, ans = 0.0;
	char op;
	printf ("Enter the two numbers:\t");
	scanf ("%lf %lf", &a, &b);
	printf ("Enter the Operator (+, -, *, /, %, ^):\t");
	scanf (" %c", &op);
	if (op == '+') {
		ans = a + b;
	} else if (op == '-') {
                ans = a - b;
        } else if (op == '*') {
                ans = a * b;
        } else if (op == '/') {
                ans = a / b;
        } else if (op == '%') {
                ans = (int)a % (int)b;
        } else if (op == '^') {
                ans = pow (a, b);
        } else {
		printf ("Invalid Operator\n");
		return 0;
	}
	printf ("%lf %c %lf = %lf\n", a, op, b, ans);
	return 0;
}
