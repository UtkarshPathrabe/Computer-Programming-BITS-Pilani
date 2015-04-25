#include <stdio.h>

void removeDuplicates (char *str) {
	int i, j = 1;
	if (str[0] == '\0') return;
	while (str[j] != '\0') {
		if (str[j - 1] == str[j]) {
			for (i = j; str[i] != '\0'; i++) {
				str[i] = str[i+1];
			}
			j--;
		}
		j++;
	}
}

int main (void) {
	char str[100];
	printf ("Enter a string:\t");
	gets (str);
	printf ("String %s ", str);
	removeDuplicates (str);
	printf ("after removing duplicates is %s.\n", str);
	return 0;
}
