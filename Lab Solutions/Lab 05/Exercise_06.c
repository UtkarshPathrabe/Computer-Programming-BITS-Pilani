#include <stdio.h>

int main (void) {
        int score;
        printf ("Enter the quiz score:\t");
        scanf ("%d", &score);
	switch (score) {
		case 10:
		case 9:	printf ("You scored A grade.\n");
			break;
		case 8:
		case 7:	printf ("You scored B grade.\n");
			break;
		case 6:
		case 5:	printf ("You scored C grade.\n");
			break;
		case 4:
		case 3:	printf ("You scored D grade.\n");
			break;
		default:	printf ("You scored F grade.\n");
	}
        return 0;
}

