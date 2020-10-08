#define ln ListNode
ListNode* Solution::rotateRight(ListNode* A, int B) {
    int n = 0, c = 0;
    ln *t = A, *ans = A;
    while(t->next!=NULL){
        t = t->next;
        n++;
    }
    B = B%(n+1);
    if(B == 0 || n == 0)
        return A;
    while(c < (n-B)){
        ans=ans->next;
        c++;
    }
    ln* temp = ans->next;
    ans -> next = NULL;
    t->next = A;
    return temp;
}
