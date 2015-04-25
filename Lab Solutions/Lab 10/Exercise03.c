#include <stdio.h>

void splitNumber (char *telNumber, char *Part1, char *Part2) {
	int i = 0, j = 0, k = 0;
	while (telNumber[i++] != '-');
	while (telNumber[i] != '-' && telNumber[i] != '\0') {
		Part1[j++] = telNumber[i++];
	}
	Part1[j] = '\0';
	i++;
	while (telNumber[i] != '\0') {
		Part2[k++] = telNumber[i++];
	}
	Part2[k] = '\0';
}

int main (void) {
	char telNumber[20] = "", Part1[12] = "", Part2[12] = "";
	printf ("Enter the telephone number:\t");
	gets (telNumber);
	splitNumber (telNumber, Part1, Part2);
	if (Part2[0] == '\0') {
		printf ("Phone Number: %s\n", Part1);
	} else {
		printf ("City Code: %s\tPhone Number: %s\n", Part1, Part2);
	}
	return 0;
}
