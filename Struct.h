#ifndef STRUCT_H
#define STRUCT_H

typedef struct Node {
	int value;
	struct Node *next;
}Node;
Node *createNode(int);
void insertAtEnd(Node**,int);
void insertAtFront(Node**,int);
void insertAt(Node**,int,int);
void deleteNode(Node**,int);
void removeFront(Node**);
void removeBack(Node**);
void removeAt(Node**,int);
Node *search(Node*,int);
void printList(Node*);
void freeList(Node**);

#endif
