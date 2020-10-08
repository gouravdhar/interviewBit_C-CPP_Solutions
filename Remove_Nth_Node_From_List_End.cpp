#define ln ListNode
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ln* t = A, *ans = A;
    int c = 1, n = 0;
    while(t != NULL){
        n++;
        t = t->next;
    }
    t = A;
    while(t != NULL){
        c++;
        if(c == (n-B+1) ){
            ans = t;
            break;
        }
        else
            t = t->next;
    }
    if(t == NULL)
        return A->next;
    else
        ans->next = ans->next->next;
    return A;
}
