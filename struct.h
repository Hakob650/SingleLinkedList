#ifndef STRUCT_H
#define STRUCT_H

#include <stddef.h>

typedef struct Node {
        int value;
      struct  Node *next;
}Node ;
Node* createNode(int);
void InsertAtEnd(Node**,int);
void InsertAtFront(Node**,int);
void InsertAt(Node**,int,int);
void DeleteNode(Node**,int);
void RemoveFront(Node**);
void RemoveBack(Node**);
void RemoveAt(Node**,int);
Node* Search(Node*,int);
void PrintList(Node*);
void FreeList(Node**);

#endif
