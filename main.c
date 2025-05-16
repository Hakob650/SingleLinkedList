#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int main(){
    Node *head=NULL;

    printf("Inserting Elements\n");
    
    InsertAtEnd(&head, 10);
    InsertAtEnd(&head, 20);
    InsertAtFront(&head,5);
    InsertAt(&head,1,15);

    printf("Removing Elements\n");
    DeleteNode(&head,15);
    RemoveFront(&head);
    RemoveBack(&head);
    RemoveAt(&head,1);

    printf("Searching Element\n");
    Node *node=Search(head,10);
    if(node){
        printf("Element %d  is Found\n",node->value);
    }else{
        printf("Element not found\n");
    }

    printf("Printing List\n");
    PrintList(head);

    printf("Free List\n");
    FreeList(&head);

    return 0;
}




