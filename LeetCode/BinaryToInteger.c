int getDecimalValue(struct ListNode* head) {
    int res=0;
    while(head!=NULL){
        res=(res<<1)|head->val;
        head=head->next;
    }return res;
}
