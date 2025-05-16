#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
Node* createNode(int value){
    Node* node=(Node*)malloc(sizeof(Node));
    if(node==NULL){
        return NULL;
    }
    node->value=value;
    node->next=NULL;
    return node;
}
void InsertAtEnd(Node **head,int value){
    Node *tmp=*head;
    Node *new_node=createNode(value);
    while(new_node==NULL){
        return;
    }
    if(tmp==NULL){
        *head=new_node;
        return;
    }
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=new_node;
}
void InsertAtFront(Node **head,int value){
    Node* new_node=createNode(value);
    if(*head==NULL){
        return;
    }
    new_node->next=*head;
    *head=new_node;
}
void InsertAt(Node **head,int index,int value){
    Node *new_node=createNode(value);
    if(index==0){
        InsertAtFront(head,value);
        return;
    }
    Node *tmp=*head;
    int pos=0;
    while(pos<index-1 && tmp->next!=NULL){
        tmp=tmp->next;
        ++pos;
    }
    new_node->next=tmp->next;
    tmp->next=new_node;
}
void DeleteNode(Node ** head,int value){
    if(*head==NULL){
        return;
    }
    Node *temp=*head;
    if(temp->value==value){
        *head=temp->next;
        free(temp);
        return;
    }
    Node* prev=NULL;
    while(temp!=NULL && temp->value!=value){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        return;
    }
    prev->next=temp->next;
    free(temp);
}
void RemoveFront(Node **head){
    if(*head==NULL){
        return;
    }
    Node *temp=*head;
    *head=temp->next;
    free(temp);
}
void RemoveBack(Node **head){
    if(*head==NULL){
        return;
    }
    if((*head)->next==NULL){
        free(*head);
        *head=NULL;
        return;
    }
    Node *tmp=*head;
    if(tmp->next->next!=NULL){
        tmp=tmp->next;
    }
    free(tmp->next);
    tmp->next=NULL;
}
void RemoveAt(Node **head,int index){
    if(*head==NULL){
        return;
    }
    if(index==0){
        Node *tmp=*head;
        *head=tmp->next;
        free(tmp);
        return;
    }
    Node *current=*head;
    int pos=0;
    while(pos<index-1 && current!=NULL){
        current=current->next;
        ++pos;
    }
    while(current==NULL ||  current->next==NULL){
        return;
    }
    Node *tmp=current->next;
    current->next=tmp->next;
    free(tmp);
}
Node* Search(Node *head,int value){
    if(head==NULL){
        return NULL;
    }
    Node *tmp=head;
    while(tmp!=NULL){
        if(tmp->value==value){
            return tmp;
        }
        tmp=tmp->next;
    }
    return NULL;
}
void PrintList(Node *head){
    if(head==NULL){
        return;
    }
    Node *tmp=head;
    while(tmp!=NULL){
        printf("%d",tmp->value);
        tmp=tmp->next;
    }printf("\n");
}
void FreeList(Node **head){
    if(head==NULL || *head==NULL){
        return;
    }
    if(*head==NULL){
        return;
    }
    Node *tmp=*head;
    Node *nextNode;
    while(tmp!=NULL){
        nextNode=tmp->next;
        free(tmp);
        tmp=nextNode;
    }
    *head=NULL;
}





    

    



    
    
    
    


    
    







        
        
        

        
