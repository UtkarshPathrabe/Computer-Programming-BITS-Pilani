#include <stdio.h>

int main (void) {
	int score;
	printf ("Enter the quiz score:\t");
	scanf ("%d", &score);
	if (score > 10) {
		printf ("Invalid Score\n");
	} else if (score == 9 || score == 10) {
		printf ("You scored A grade.\n");
        } else if (score == 7 || score == 8) {
                printf ("You scored B grade.\n");
        } else if (score == 5 || score == 6) {
                printf ("You scored C grade.\n");
        } else if (score == 3 || score == 4) {
                printf ("You scored D grade.\n");
        } else {
		printf ("You scored F grade.\n");
	}
	return 0;
}
