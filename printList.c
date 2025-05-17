#include <stdio.h>
#include <stdlib.h>
#include "Struct.h"
Node* search(Node *head,int val){
        Node *tmp=head;
        while(tmp!=NULL){
                if(tmp->value==val){
                        return tmp;
                }
                tmp=tmp->next;
        }
        return NULL;
}
