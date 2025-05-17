#include <stdio.h>
#include <stdlib.h>
#include "Struct.h"
void deleteNode(Node **head,int val){
        if(*head==NULL){
                return;
        }
        Node *tmp=*head;
        if(tmp->value==val){
                *head=tmp->next;
                free(tmp);
                return;
        }
        Node *prev=NULL;
        while(tmp!=NULL && tmp->value!=val){
                prev=tmp;
                tmp=tmp->next;
        }
        if(tmp==NULL){
                return;
        }
        prev->next=tmp->next;
        free(tmp);
}
