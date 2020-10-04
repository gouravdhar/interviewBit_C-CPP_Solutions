int in(vector<int> &A, int B, int l, int h){
    if(l > h)
        return l;
    int m = (l+h)/2;
    if(A[m] == B)
        return m;
    if(A[m] > B)
        return in(A, B, 0, m-1);
    else 
        return in(A, B, m+1, h);
}
int Solution::searchInsert(vector<int> &A, int B) {
    return in(A, B, 0, A.size()-1);
}
