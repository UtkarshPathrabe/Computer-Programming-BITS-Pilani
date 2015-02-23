#include <stdio.h>

int main (void) {
	int index = 0, binary[16] = {0}, decimal, temp, i;
	printf ("Enter a decimal number:\t");
	scanf ("%d", &decimal);
	temp = decimal;
	while (temp) {
		binary[index++] = temp % 2;
		temp /= 2;
	}
	for (i = index - 1; i >= 0; i--) {
		printf ("%d", binary[i]);
	}
	printf ("\n");
	return 0;
}
