#define ln ListNode
ln* reverse(ln *mid){
    ln *b =mid->next;
    mid->next = NULL;
    while(b!=NULL){
        ln* temp = b->next;
        b->next = mid;
        mid = b;
        b = temp;
    }
    return mid;
}
int Solution::lPalin(ListNode* A) {
    if(A->next == NULL)
        return 1;
    ln *mid = A, *fst = A;
    while(fst != NULL){
        mid = mid->next;
        fst = fst -> next;
        if(fst != NULL)
            fst = fst->next;
    }
    mid = reverse(mid);
    while(A!=NULL && mid!=NULL){
        if(A->val != mid->val)
            return 0;
        A = A->next;
        mid = mid->next;
    }
    return 1;
}
