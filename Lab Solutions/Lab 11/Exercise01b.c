#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct class;
struct text_book;
typedef struct class std;
typedef struct text_book TextBook;

struct class {
	int no_books;
	TextBook *booklist;
};

struct text_book {
	char name[10];
	int bid;
	float price;
	int numaut;
	char autlist[5][10];
};

std ReadClassInfoByValue (int nb) {
	int i, j;
	char buf;
	std s;
	s.no_books = nb;
	s.booklist = (TextBook *) malloc (s.no_books * sizeof(TextBook));
	for (i = 0; i < s.no_books; i++) {
		printf ("For the %d Book:\n", i + 1);
		printf ("\tEnter the name:\t");
		gets ((s.booklist)[i].name);
		printf ("\tEnter the Book ID:\t");
		scanf ("%d", &((s.booklist)[i].bid));
		printf ("\tEnter the Book Price:\t");
		scanf ("%f", &((s.booklist)[i].price));
		printf ("\tEnter the Number of Authors of the Book:\t");
		scanf ("%d", &((s.booklist)[i].numaut));
		scanf ("%c", &buf);
		for (j = 0; j < (s.booklist)[i].numaut; j++) {
			printf ("\t\tEnter the name of %dth Author of the Book:\t", j + 1);
			gets ((s.booklist)[i].autlist[j]);
		}
	}
	return s;
}

void PrintClassInfo(std s) {
	int i, j;
	for (i = 0; i < s.no_books; i++) {
		printf ("\tTextBook %d Info:\n", i + 1);
		printf ("\t\tTextBook Name:\t%s\n", (s.booklist)[i].name);
		printf ("\t\tTextBook ID:\t%d\n", (s.booklist)[i].bid);
		printf ("\t\tTextBook Price:\t%.2f\n", (s.booklist)[i].price);
		for (j = 0; j < (s.booklist[i]).numaut; j++) {
			printf ("\t\tTextBook %dth Author:\t%s\n", j + 1, (s.booklist[i]).autlist[j]);
		}
	}
}

void PrintAllInfo(std *s, int nc) {
	int i;
	for(i = 0; i < nc; i++){
		printf ("Standard %d Books Info:\n", i + 1);
		PrintClassInfo(s[i]);
	}
}

int main (void) {
	int nc, ns, i, j;
	char buf;
	std *s;
	printf("\nEnter the Number of Classes:\t");
	scanf("%d", &nc);
	s = (std *) malloc (nc * sizeof(std));
	for(i = 0; i < nc; i++){
		printf ("\nEnter the Number of Text Books for %d Standard:\t", i + 1);
		scanf ("%d", &ns);
		scanf ("%c", &buf);
		s[i] = ReadClassInfoByValue (ns);
	}
	for(i = 0; i < nc; i++){
		printf ("Standard %d Books Info:\n", i + 1);
		PrintClassInfo(s[i]);
	}
	PrintAllInfo (s, nc);
	return 0;
}
