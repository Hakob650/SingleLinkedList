#include <stdio.h>
#include <stdlib.h>
#include "Struct.h"
void removeAt(Node **head,int index){
        if(*head==NULL || index<0){
                return;
        }
        Node *tmp=*head;
        if(index==0){
                *head=tmp->next;
                free(tmp);
                return;
        }
        Node *prev=NULL;
        int pos=0;
        while(tmp!=NULL && pos<index){
                prev=tmp;
                tmp=tmp->next;
                pos++;
        }
        if(tmp==NULL){
                return;
        }
        prev->next=tmp->next;
        free(tmp);
}
