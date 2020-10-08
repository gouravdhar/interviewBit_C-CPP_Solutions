#define ln ListNode
int value(ln *A){
    int a;
    if(A!=NULL)
            a = A->val;
        else
            a = 0;
    return a;
}
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ln *ans = new ln(0);
    ln* ansh = ans;
    int carry = 0;
    while(A != NULL || B != NULL){
        int a, b, sum;
        a = value(A);
        b = value(B);
        sum = (a + b + carry) % 10;
        carry = (a + b + carry) / 10;
        ln *temp = new ln(sum);
        ans->next = temp;
        ans = ans->next;
        if(A != NULL)
            A = A->next;
        if(B != NULL)
            B = B -> next;
    }
    if(carry!=0){
        ln *temp = new ln(carry);
        ans->next = temp;
    }
    return ansh->next;
}
