#include <stdio.h>
#include <stdlib.h>
#include "Struct.h"
void insertAtEnd(Node **head,int val){
        Node *newNode=createNode(val);
        if(newNode==NULL){
                return;
        }
        if(*head==NULL){
                *head=newNode;
                return;
        }
        Node *tmp=*head;
        while(tmp->next!=NULL){
                tmp=tmp->next;
        }
        tmp->next=newNode;
}
