#include <stdio.h>
#include <stdlib.h>
#include "Struct.h"
void printList(Node *head){
        Node *tmp=head;
        while(tmp!=NULL){
                printf("%d->",tmp->value);
                tmp=tmp->next;
        }
}

