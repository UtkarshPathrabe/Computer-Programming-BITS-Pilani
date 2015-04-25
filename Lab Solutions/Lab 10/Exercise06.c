#include <stdio.h>

int isdigit (int c) {
	if (c >= 48 && c <= 57)
		return 1;
	return 0;
}

int islower (int c) {
	if (c >= 97 && c <= 122)
		return 1;
	return 0;
}

int isupper (int c) {
	if (c >= 65 && c <= 90)
		return 1;
	return 0;
}

int isalpha (int c) {
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return 1;
	return 0;
}

int isspace (int c) {
	if (c == 32)
		return 1;
	return 0;
}

int toupper (int c) {
	if (c >= 97 && c <= 122)
		return c - 32;
	return c;
}

int tolower (int c) {
	if (c >= 65 && c <= 90)
		return c + 32;
	return c;
}

char *strcpy (char *str1, const char *str2) {
	int i = 0;
	while (str2[i] != '\0') {
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
	return str1;
}

size_t strlen (const char *str) {
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}
	return len;
}

char *strcat (char *str1, const char *str2) {
	int i = 0, j = 0;
	while (str1[i++] != '\0');
	i--;
	while (str2[j] != '\0') {
		str1[i++] = str2[j++];
	}
	str1[i] = '\0';
	return str1;
}

int main (void) {
	char c = '9';
	printf ("%c :\tisdigit(%c) returns %d.\n", c, c, isdigit(c));
	printf ("%c :\tisalpha(%c) returns %d.\n", c, c, isalpha(c));
	c = 'a';
	printf ("%c :\tisdigit(%c) returns %d.\n", c, c, isdigit(c));
	printf ("%c :\tisalpha(%c) returns %d.\n", c, c, isalpha(c));
	printf ("%c :\tislower(%c) returns %d.\n", c, c, islower(c));
	printf ("%c :\tisupper(%c) returns %d.\n", c, c, isupper(c));
	printf ("%c :\ttolower(%c) returns %c.\n", c, c, tolower(c));
	printf ("%c :\ttoupper(%c) returns %c.\n", c, c, toupper(c));
	c = ' ';
	printf ("%c :\tisspace(%c) returns %d.\n", c, c, isspace(c));
	char str1[100] = "Hi! How are you? ", str2[50] = "What is your name?", str3[50] = "";
	strcat (str1, str2);
	strcpy (str3, str2);
	printf ("str1 = %s\nstr2 = %s\nstr3 = %s\nLength of str1 is %d.\n", str1, str2, str3, strlen(str1));
	return 0;
}
