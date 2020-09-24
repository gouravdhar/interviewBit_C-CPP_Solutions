vector<int> Solution::solve(vector<int> &A) {
    int n = A.size();
    int in = n-1, max = A[n-1];
    vector<int> ans(1, max);
    while(--in >= 0){
        if(A[in] > max){
            ans.push_back(A[in]);
            max = A[in];
        }
    }
    return ans;
}
