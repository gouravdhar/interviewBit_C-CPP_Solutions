int Solution::solve(vector<int> &A) {
    int ans = 0, n=A.size();
    for(int i=0; i<n; i++){
        if(( (n-i) * (i+1) ) % 2 != 0)
            ans=ans^A[i];
    }
    return ans;
}
