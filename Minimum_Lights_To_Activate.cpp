int in(vector<int> A, int ini, int lim, int B, int n){
    for(int j = ini; j>=lim; j--){
            if(A[j]==1){return j;}
    }
    return -1;
}
int Solution::solve(vector<int> &A, int B) {
    int n = A.size()-1;
    int ans = 0;
    for(int i=0; i<n; i++){
        int ind = in(A,min(n, i+B-1), i, B, n); //for right limit
        if(ind == -1){
            ind = in(A, i, max(0, i-B+1), B, n); // for left limit
            if(ind == -1){return -1;}
        }
        ans++;
        i = ind + B - 1;
    }
    return ans;
}
