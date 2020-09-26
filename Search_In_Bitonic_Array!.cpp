int bin(vector<int> A, int l , int h, int B){
    int m = (l+h)/2;
    while(l<=h){
        m =(l+h)/2;
        if(A[m] == B){
            return m;
        }
        if(A[m] < B){
            l = m+1;
        }
        else{
            h = m-1;
        }
    }
    return -1;
}
int Solution::solve(vector<int> &A, int B) {
    int mx = A[0], in = 0, n = A.size();
    for(int i = 1; i<n; i++){
        if(A[i]  > mx){
            mx = A[i];
            in = i;
        }
    }
    reverse(A.begin()+in+1, A.end());
    int a = bin(A, 0, in, B);
    int b = bin(A, in+1, n-1, B);
    if(a+b == -2){
        return -1;
    }
    if(b!=-1){
        return n-(b-in-1)-1;
    }
    return a;
}
