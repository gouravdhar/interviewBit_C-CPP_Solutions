long long srch(vector<int> A, long long B, long long l, long long h){
    if(l > h)
        return -1;
    
    long long m = (l+h)/2;
    if(A[m] == B)
        return m;
    else if(A[m] < B)
        return srch(A, B, m+1, h);
    else
        return srch(A, B, l, m-1);
    
}
long long srchindx(vector<int> A, long long l, long long h){
    if(l > h)
        return 0;
    long long m = (l+h)/2;
    if(A[m] < A[m-1])
        return m;
    else if(A[m] < A[h])
        return srchindx(A, l, m-1);
    else
        return srchindx(A, m+1, h);
    
}
int Solution::search(const vector<int> &A, int B) {
    int n = A.size(), pt=0;
    pt = srchindx(A, 0, n-1);
    return max(srch(A, B, 0, pt-1), srch(A, B, pt, n-1));
    
}
