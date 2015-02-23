#include <stdio.h>

int main (void) {
	int count = 1, numOfTerms;
	double pi = 0.0;
	printf("Number of terms (must be 1 or larger):\t");
	scanf("%d", &numOfTerms);
	while (count <= numOfTerms) {
		if(count % 2 == 0)
			pi -= (4.0 / (2.0 * count - 1));	//Even Terms
		else
			pi += (4.0 / (2.0 * count - 1));	//Odd Terms
		count++;
	}
	printf("\nThe approximate value of pi is %lf\n", pi);
	return 0;
}
