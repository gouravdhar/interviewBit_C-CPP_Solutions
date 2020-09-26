#define mod 1000000007 
vector<vector<long long>> mul(vector<vector<long long>> A, vector<vector<long long>> B){
    vector<vector<long long>> C(A);
    C[0][0] = ((A[0][0]*B[0][0])%mod + (A[0][1]*B[1][0])%mod) % mod;
    C[0][1] = ((A[0][0]*B[0][1])%mod + (A[0][1]*B[1][1])%mod) % mod;
    C[1][0] = ((A[1][0]*B[0][0])%mod + (A[1][1]*B[1][0])%mod) % mod;
    C[1][1] = ((A[1][0]*B[0][1])%mod + (A[1][1]*B[1][1])%mod) % mod;

    return C;
}

vector<vector<long long>> power(vector<vector<long long>> A, int n){
    if(n == 2){return mul(A, A);}
    vector<vector<long long>> ans(2, vector<long long>(2, 1));
    ans[0][1] = 0;
    ans[1][0] = 0;
    if(n % 2 != 0){
        ans = A;
        n--;
    }
    if((n/2) == 0){return ans;}
    ans = mul( ans, power(power(A,(n/2)), 2));
    return ans;
}

int Solution::solve(int A) {
    vector<vector<long long>> M(2, vector<long long>(2,1));
    M[1][1] = 0;
    
    vector<vector<long long>> ans(M);
    ans = power(M, A-1);

    return ans[0][0];
}
