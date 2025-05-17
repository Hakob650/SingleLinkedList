#include <stdio.h>
#include <stdlib.h>
#include "Struct.h"
void insertAtFront(Node **head,int val){
        Node *newNode=createNode(val);
        if(newNode==NULL){
                return;
        }
        newNode->next=*head;
        *head=newNode;
}
