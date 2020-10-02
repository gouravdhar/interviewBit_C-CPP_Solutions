#define ln ListNode
void reverse(ln* A, int B){
    ln* head = A;
    ln* ptr = A->next;
    
    if(ptr == NULL)
        return;
        
    ln* ptr2 = ptr->next;
    ptr->next = NULL;
    
    if(ptr2 == NULL)
        return;
        
    int n = 0;
    
    while(n < B-1 && ptr2!=NULL){
        ln* temp = ptr2->next;
        ptr2->next = ptr;
        ptr = ptr2;
        ptr2 = temp;
        n++;
    }
    
    ln* temp1 = head->next;
    
    if(ptr2 == NULL){
        temp1->next = NULL;
        head->next = ptr;
        return;
    }
    
    temp1->next = ptr2;
    head->next = ptr;
    
    n = 0;
    while(n < B && temp1!=NULL){
        temp1=temp1->next;
        n++;
    }
    
    if(temp1==NULL)
        return;
        
    reverse(temp1, B);
}
ListNode* Solution::solve(ListNode* A, int B) {
    ln* ans = new ln(0);
    ans->next = A;
    reverse(ans, B);
    return ans->next;
}
