int Solution::solve(ListNode* a, int b) {
    ListNode* s = a;
    int c = 0;
    
    while(s!=NULL && ++c)
        s = s->next;

    int tar = (c/2) - b + 1;
    
    if(tar-1 < 0)
        return -1;
    
    while(--tar > 0)
        a = a->next;

    return a->val;
}
