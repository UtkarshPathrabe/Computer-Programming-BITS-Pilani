#include <stdio.h>

int main (void) {
	int count, numOfTerms;
	double pi = 0.0;
	printf("Number of terms (must be 1 or larger):\t");
	scanf("%d", &numOfTerms);
	for(count = 1; count <= numOfTerms; count++) {
		if(count % 2 == 0)
			pi -= (4.0 / (2.0 * count - 1));	//Even Terms
		else
			pi += (4.0 / (2.0 * count - 1));	//Odd Terms
	}
	printf("\nThe approximate value of pi is %lf\n", pi);
	return 0;
}
