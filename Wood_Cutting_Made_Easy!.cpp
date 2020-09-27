long long getWood(vector<int> A, int h){
    long long ans = 0, in = -1;
    while(++in < A.size()){
        ans = ans + max(0,A[in]-h);
    }
    return ans;
}
int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int m, l = 0, h = *max_element(A.begin(), A.end());
    while(l <= h){
        m = (l+h)/2;
        long long pr = getWood(A, m);
        if(B == pr){return m;}
        else if(pr < B){h= m-1;}
        else{l = m+1;}
    }
    return h;
}
