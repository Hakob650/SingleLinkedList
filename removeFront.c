#include <stdio.h>
#include <stdlib.h>
#include "Struct.h"
void removeFront(Node **head){
        if(*head==NULL){
                return;
        }
        Node *tmp=*head;
        *head=(*head)->next;
        free(tmp);
}
