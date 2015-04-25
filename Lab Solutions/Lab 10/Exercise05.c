#include <stdio.h>

int main (void) {
	int i = 0, j = 0, start, end;
	char sentence[100] = "", answer[100] = "";
	printf ("Enter a sentence:\t");
	gets (sentence);
	while (sentence[i] != '\0') {
		i++;
	}
	while (i >= 0) {
		if (j != 0) {
			answer[j++] = ' ';
		}
		end = --i;
		while (sentence[i] != ' ' && i >= 0) {
			i--;
		}
		start = ++i;
		for (i = start; i <= end; i++, j++) {
			answer[j] = sentence[i];
		}
		i = start - 1;
	}
	printf ("After reversing '%s' becomes '%s'\n", sentence, answer);
	return 0;
}
