int Solution::perfectPeak(vector<int> &A) {
    int n = A.size(), in = 0;
    vector<int> fr(A), rev(A), ans;
    while(++in < n){
        fr[in] = max(fr[in], fr[in-1]);
        rev[n-in-1] = min(rev[n-in-1], rev[n-in]);
    }
    in = 0;
    while(++in < n-1){
        if(A[in] > fr[in-1] && A[in] < rev[in+1]){
            return 1;
        }
    }
    return 0;
}
