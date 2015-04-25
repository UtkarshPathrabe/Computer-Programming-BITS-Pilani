#include <stdio.h>

char *strcpy (char *str1, const char *str2) {
	int i = 0;
	while (str2[i] != '\0') {
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
	return str1;
}

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

int searchWord (const char *sentence, const char *word) {
	int i, j;
	char temp[50] = "";
	while (sentence[i] != '\0') {
		j = 0;
		strcpy(temp, "");
		while (sentence[i] != ' ' && sentence[i] != '\0') {
			temp[j++] = sentence[i];
			i++;
		}
		temp[j] = '\0';
		if ((strcmp (temp, word)) == 0) return 1;
		if (sentence[i] == ' ') i++;
	}
	return 0;
}

int main (void) {
	int n, i, flag[20] = {0};
	char array[20][100], word[50] = "", buff;
	printf ("Enter the word that you want to find in the strings:\t");
	gets (word);
	printf ("Enter the number of strings you want to enter(<= 20) and enter those strings:\t");
	scanf ("%d%c", &n, &buff);
	for (i = 0; i < n; i++) {
		gets (array[i]);
		if (searchWord (array[i], word))
			flag[i] = 1;
	}
	printf ("The strings containing %s are:\n", word);
	for (i = 0; i < n; i++) {
		if (flag[i])
			puts (array[i]);
	}
	return 0;
}
