#include <stdio.h>
#include <math.h>

int main (void) {
        double a, b, ans = 0.0;
        char op;
        printf ("Enter the two numbers:\t");
        scanf ("%lf %lf", &a, &b);
        printf ("Enter the Operator (+, -, *, /, %, ^):\t");
        scanf (" %c", &op);
	switch (op) {
		case '+':	ans = a + b;
				break;
		case '-':       ans = a - b;
                                break;
		case '*':       ans = a * b;
                                break;
		case '/':       ans = a / b;
                                break;
		case '%':       ans = (int)a % (int)b;
                                break;
		case '^':       ans = pow (a, b);
                                break;
		default:	printf ("Invalid Operator\n");
				return 0;
	}
        printf ("%lf %c %lf = %lf\n", a, op, b, ans);
        return 0;
}

