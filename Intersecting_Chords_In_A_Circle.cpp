#define mod 1000000007
int Solution::chordCnt(int A) {
    vector<int> ans(A+1, 0);
    ans[0] = 1;
    ans[1] = 1;
    for(int i=2; i<A+1; i++)
        for(int j=0; j<=i; j++)
            ans[i] = (ans[i] + ((long)ans[j] * (long)ans[i-j-1])%mod)%mod;
    return ans[A];
}
