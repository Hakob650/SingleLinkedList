#include <stdio.h>
#include <stdlib.h>
#include "Struct.h"
void freeList(Node **head){
        Node *current=*head;
        Node *nextNode;
        while(current!=NULL){
                nextNode=current->next;
                free(current);
                current=nextNode;
        }
        *head=NULL;
}
