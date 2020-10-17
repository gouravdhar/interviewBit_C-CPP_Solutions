int Solution::jump(vector<int> &A) {
    int ans = 0, c = 0, n = 0;
    for(int i=0; i<=c; i++){
        if(i == A.size()-1)
            return ans;
        n = max(A[i]+i, n);
        if(i == c){
            ans++;
            c = n;
        }
    }
    return -1;
}
