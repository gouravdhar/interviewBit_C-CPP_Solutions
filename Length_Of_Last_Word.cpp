int Solution::lengthOfLastWord(const string A) {
    int ans = 0, flag = 0;
    for(int i = A.length(); i>=0; i--){
        if(!iswalnum(A[i]) && flag == 1)
            return ans;
        if(iswalnum(A[i]) && flag == 0)
            flag = 1;
        if(iswalnum(A[i]))
            ans++;
    }
    return ans;
}
