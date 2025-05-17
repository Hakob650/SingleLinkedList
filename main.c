#include <stdio.h>
#include "Struct.h"
int main(){
	Node *head=NULL;

	insertAtEnd(&head,10);
	insertAtEnd(&head,20);
	insertAtEnd(&head,30);

	Node *newNode=createNode(15);
	if(newNode==NULL){
		newNode->next=head;
		head=newNode;
	}

	insertAt(&head,2,14);

	printf("List After Inserts:\n ");
	printList(head);
	printf("\n");

	int SearchVal=15;
	Node *found=search(head,SearchVal);
	if(found!=NULL){
		printf("Value %d is found in List\n",SearchVal);
	}else{
		printf("Value %d is not found in List\n",SearchVal);
	}

	deleteNode(&head,20);
	printf("List after deleting 20:\n ");
	printList(head);
	printf("\n");
	
	removeFront(&head);
	printf("List after removing first node:\n ");
	printList(head);
	printf("\n");

	removeBack(&head);
	printf("List after removing last node:\n ");
	printList(head);
	printf("\n");

	removeAt(&head,1);
	printf("List after removing node at index 1:\n ");
	printList(head);
	printf("\n");

	freeList(&head);
	if(head==NULL){
		printf("List freed\n");
	}else{
		printf("List not freed\n");
	}
	return 0;
}


