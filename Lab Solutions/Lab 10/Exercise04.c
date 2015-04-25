#include <stdio.h>
#include <string.h>

int main (void) {
	char sentence[100], word[20], temp[20];
	int i = 0, j = 0, start = 0, matchflag = 1;
	printf ("Enter a string:\t");
	gets (sentence);
	printf ("Enter the word to be exchanged and the word to be exchanged with:\t");
	gets (temp);
	gets (word);
	printf ("String '%s' after replacing '%s' with '%s' is:\t", sentence, temp, word);
	while (sentence[i] != '\0') {
		j = 0;
		start = i;
		while (temp[j] != '\0') {
			if (sentence[i] != temp[j]) {
				matchflag = 0;
				break;
			} else {
				matchflag = 1;
			}
			i++;
			j++;
		}
		if (matchflag == 1) {
			i = start;
			j = 0;
			while (temp[j] != '\0') {
				sentence[i] = word[j];
				i++;
				j++;
			}
			i = start + j;
		} else {
			i = start + 1;
		}
	}
	printf ("'%s'\n", sentence);
	return 0;
}
