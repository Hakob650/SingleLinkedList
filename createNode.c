#include <stdio.h>
#include <stdlib.h>
#include "Struct.h"
Node* createNode(int val){
        Node *node=(Node*)malloc(sizeof(Node));
        if(node==NULL){
                return NULL;
        }
        node->value=val;
        node->next=NULL;
        return node;
}
