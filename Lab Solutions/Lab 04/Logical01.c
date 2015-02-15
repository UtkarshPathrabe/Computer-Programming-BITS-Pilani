#include <stdio.h>

int main (void) {
	int i = 7, result;
	float f = 5.5;
	char c = 'w';
	result = (i >= 6) && (c == 'w');
	printf ("Result = %d\n", result);
	result = (i >= 6) || (c == 119);
        printf ("Result = %d\n", result);
	result = (f < 11) && (i > 100);
        printf ("Result = %d\n", result);
	result = (c != 'P') || ((i + f) <= 10);
        printf ("Result = %d\n", result);
	return 0;
}
