struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *current=head;
    while(current!=NULL && current->next!=NULL){
        if(current->val==current->next->val){
            struct ListNode *tmp=current->next;
            current->next=current->next->next;
            free(tmp);
        }else{
            current=current->next;
        }
    }
    return head;
}
