struct ListNode* removeElements(struct ListNode* head, int val) {
    while(head!=NULL && head->val==val){
        struct ListNode *tmp=head;
        head=head->next;
        free(tmp);
    }
    struct ListNode *current=head;
    while(current!=NULL && current->next!=NULL){
        if(current->next->val==val){
            struct ListNode *temp=current->next;
            current->next=current->next->next;
            free(temp);
        }else{
            current=current->next;
        }
    }return head;
}
