ListNode* Solution::solve(ListNode* A) {
    int zeroCnt = 0;
    ListNode* B = A;
    
    while(B!=NULL){
        if(B->val == 0)
            zeroCnt++;
        B=B->next;
    }
    
    B=A;
    while(B!=NULL){
        if(zeroCnt-- > 0)
            B->val=0;
        else 
            B->val=1;
        B=B->next;
    }
    return A;
}
