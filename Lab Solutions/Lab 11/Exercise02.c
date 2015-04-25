#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct text_book;
typedef struct text_book TextBook;

struct text_book {
	char name[10];
	int bid;
	float price;
	int numaut;
	char autlist[5][10];
};

void sortTextBooks (TextBook * list, int len) {
	int i, j;
	TextBook tb;
	for (i = 1; i < len; i++) {
		tb = list[i];
		j = i - 1;
		while (j >= 0 && list[j].bid > tb.bid) {
			list[j + 1] = list[j];
			j--;
		}
		list[j + 1] = tb;
	}
}

void PrintClassInfo(TextBook * list, int len) {
	int i, j;
	for (i = 0; i < len; i++) {
		printf ("\tTextBook %d Info:\n", i + 1);
		printf ("\t\tTextBook Name:\t%s\n", list[i].name);
		printf ("\t\tTextBook ID:\t%d\n", list[i].bid);
		printf ("\t\tTextBook Price:\t%.2f\n", list[i].price);
		for (j = 0; j < list[i].numaut; j++) {
			printf ("\t\tTextBook %dth Author:\t%s\n", j + 1, list[i].autlist[j]);
		}
	}
}

int main (void) {
	int nb, i, j;
	char buf;
	printf ("Enter the number of books:\t");
	scanf ("%d", &nb);
	scanf ("%c", &buf);
	TextBook *list = (TextBook *) malloc (sizeof(TextBook) * nb);
	for (i = 0; i < nb; i++) {
		printf ("For the %d Book:\n", i + 1);
		printf ("\tEnter the name:\t");
		gets (list[i].name);
		printf ("\tEnter the Book ID:\t");
		scanf ("%d", &(list[i].bid));
		printf ("\tEnter the Book Price:\t");
		scanf ("%f", &(list[i].price));
		printf ("\tEnter the Number of Authors of the Book:\t");
		scanf ("%d", &(list[i].numaut));
		scanf ("%c", &buf);
		for (j = 0; j < list[i].numaut; j++) {
			printf ("\t\tEnter the name of %dth Author of the Book:\t", j + 1);
			gets (list[i].autlist[j]);
		}
	}
	PrintClassInfo(list, nb);
	sortTextBooks (list, nb);
	PrintClassInfo(list, nb);
	return 0;
}