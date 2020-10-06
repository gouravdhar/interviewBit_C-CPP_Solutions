#define f(i, l, n) for(int i = l; i<n; i++)
#define p push_back
string Solution::solve(string A, int B) {
    vector<int> cnt(A.length(), 1);
    f(i, 1, A.length())
        if(A[i] == A[i-1])
            cnt[i] = cnt[i-1] + 1;
            
    for(int i = A.length()-2; i>=0; i--)
        if(A[i] == A[i+1])
            cnt[i] = cnt[i+1];
            
    string ans = "";
    f(i, 0, A.length())
        if(cnt[i]!=B)
            ans.p(A[i]);
    return ans;

}
