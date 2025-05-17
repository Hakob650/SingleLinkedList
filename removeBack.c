#include <stdio.h>
#include <stdlib.h>
#include "Struct.h"
void removeBack(Node **head){
        if(*head==NULL){
                return;
        }
        if((*head)->next==NULL){
                free(*head);
                *head=NULL;
                return;
        }
        Node *tmp=*head;
        Node *prev=NULL;
        while(tmp->next!=NULL){
                prev=tmp;
                tmp=tmp->next;
        }
        prev->next=NULL;
        free(tmp);
}
