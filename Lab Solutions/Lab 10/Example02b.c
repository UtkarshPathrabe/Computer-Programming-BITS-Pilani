#include <stdio.h>

int strcmp (const char* str1, const char* str2) {
	int i = 0;
	while (str1[i] != '\0' && str2[i] != '\0') {
		if (str1[i] != str2[i]) {
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (str1[i] - str2[i]);
}

int main (void) {
	char sentence[100], word[20], temp[20];
	int i = 0, j = 0, occurences = 0;
	gets (sentence);
	printf ("Enter the word to be searched:\n");
	gets (word);
	while (sentence[i] != '\0') {
		while (sentence[i] != ' ' && sentence[i] != '\0') {
			temp[j++] = sentence[i];
			i++;
		}
		temp[j] = '\0';
		if ((strcmp (temp, word)) == 0) occurences++;
		if (sentence[i] == ' ') i++;
		j = 0;
	}
	printf ("Number of occurences of word are %d.\n", occurences);
	return 0;
}
