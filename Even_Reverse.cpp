#define ln ListNode
ln* reverse(ln* A){
    if(A->next==NULL)
        return A;
        
    ln* a = A->next;
    A->next = NULL;
    
    while(a->next!=NULL){
        ln* temp = a->next;
        a->next = A;
        A = a;
        a = temp;
    }
    
    a->next = A;
    return a;
}

ln* alternate(ln* A){
    ln* head = new ln(0);
    ln* ptr = A;
    ln* temp = head;
    
    while(ptr!=NULL){
        ln* node = new ln(ptr->val);
        temp->next = node;
        temp = temp->next;
        ptr = ptr->next;
        if(ptr!=NULL)
            ptr = ptr->next;
    }
    return head->next;
}

ListNode* Solution::solve(ListNode* A) {
    ln* ptrh = new ln(0);
    ln* ptr = ptrh;
    
    ln* odd = alternate(A);
    ln* even = alternate(A->next);

    even = reverse(even);
    
    while(odd!=NULL || even!=NULL){
    
        if(odd!=NULL){
            ln* temp = new ln(odd->val);
            ptr->next = temp;
            ptr = ptr->next;
            odd=odd->next;
        }
        
        if(even!=NULL){
            ln* temp = new ln(even->val);
            ptr->next=temp;
            ptr=ptr->next;
            even=even->next;
        }
    }
    
    ptrh = ptrh->next;
    return ptrh;
}
