int Solution::lis(const vector<int> &A) {
    vector<int> ans(A.size(), 1);
    int a = 1;
    for(int i=1; i<A.size(); i++)
        for(int j=0; j<i; j++)
            if(A[i] > A[j]){
                ans[i] = max(ans[i], ans[j]+1);
                a = max(a, ans[i]);
            }
    return a;
}
