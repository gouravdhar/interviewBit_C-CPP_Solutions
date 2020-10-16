int Solution::titleToNumber(string A) {
    int n = A.size()-1, ans = 0;
    for(int i=0; i<n+1; i++){
        ans +=  (A[i]-'A'+1)*pow(26, n-i);
    }
    return ans;
}
