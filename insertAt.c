#include <stdio.h>
#include <stdlib.h>
#include "Struct.h"
void insertAt(Node **head,int index,int val){
        if(index<0){
                return;
        }
        Node *newNode=createNode(val);
        if(newNode==NULL){
                return;
        }
        if(index==0){
                newNode->next=*head;
                *head=newNode;
                return;
        }
        Node *tmp=*head;
        int pos=0;
        while(tmp!=NULL && pos<index-1){
                tmp=tmp->next;
                pos++;
        }
        if(tmp==NULL){
                free(tmp);
                return;
        }
        newNode->next=tmp->next;
        tmp->next=newNode;
}
