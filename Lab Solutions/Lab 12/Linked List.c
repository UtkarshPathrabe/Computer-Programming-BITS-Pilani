#include <stdio.h>
#include <stdlib.h>

struct _node;
typedef struct node Node;
typedef Node *Link;
struct _linkedlist;
typedef struct _linkedlist LL;

struct node {
	int data;
	Link next;
};

struct _linkedlist {
	Link head;
	int size;
};

LL createLinkedList () {
	LL linkedList;
	linkedList.head = NULL;
	linkedList.size = 0;
	return linkedList;
}

void printList (LL l) {
	int i;
	Link temp = l.head;
	printf ("\nLinked List Contents are:\t");
	for (i = 0; (i < l.size) && (temp != NULL); i++) {
		printf ("%d ", temp->data);
		temp = temp->next;
	}
	printf ("\n");
}

void push (LL *l, int data) {
	Link temp = (Link)malloc(sizeof(Node));
	temp->data = data;
	temp->next = l->head;
	l->head = temp;
	l->size++;
}

void insertAfter (LL *l, int data, int d) {
	Link temp = (Link)malloc(sizeof(Node));
	Link currNode = l->head;
	int i;
	temp->data = d;
	temp->next = NULL;
	for (i = 0; (i < l->size); i++) {
		if (currNode->data == data) {
			temp->next = currNode->next;
			currNode->next = temp;
			break;
		} else {
			currNode = currNode->next;
		}
	}
	l->size++;
}

void append (LL *l, int data) {
	Link temp = (Link)malloc(sizeof(Node));
	temp->data = data;
	temp->next = NULL;
	Link currNode = l->head;
	int i;
	for (i = 0; (i < l->size) && (currNode->next != NULL); i++) {
		currNode = currNode->next;
	}
	currNode->next = temp;
	l->size++;
}

int pop (LL *l) {
	Link temp = l->head;
	l->head = temp->next;
	l->size--;
	temp->next = NULL;
	int ans = temp->data;
	free(temp);
	return ans;
}

void deleteNode (LL *l, int data) {
	Link currNode = l->head, prevNode = NULL;
	int i = 0;
	for (i = 0; i < l->size; i++, prevNode = currNode, currNode = currNode->next) {
		if (currNode->data == data) {
			if (prevNode == NULL) {
				l->head = currNode->next;
			} else {
				prevNode->next = currNode->next;
			}
			free(currNode);
			return;
		}
	}
}

int main (int argc, char *argv[]) {
	LL l = createLinkedList();
	push(&l, 45);
	push(&l, 36);
	append(&l, 94);
	append(&l, 102);
	printList(l);
	insertAfter(&l, 102, 105);
	insertAfter(&l, 102, 104);
	printList(l);
	printf ("Value poped out is :\t%d", pop(&l));
	deleteNode(&l, 104);
	deleteNode(&l, 105);
	printList(l);
	return 0;
}
