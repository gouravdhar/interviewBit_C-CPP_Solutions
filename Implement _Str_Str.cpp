#define v vector<int>
void flps(v &lps, int n, string A){
    int len = 0, j = 1;
    while(j < n){
        if(A[len] == A[j]){
            len++;
            lps[j] = len;
            j++;
        }
        else if(len != 0){
            len = lps[len-1];
        }
        else{
            lps[j] = 0;
            j++;
        }
    }
}
int Solution::strStr(const string A, const string B) {
    int la = A.length(), lb = B.length();
    if(lb > la)
        return -1;
    v lps(lb, 0);
    flps(lps, lb, B);
    int j = 0;
    for(int i = 0; i<la;){
        if(B[j] == A[i]){
            i++;
            j++;
            if(j==lb)
                return i-j;
        }
        else if(j!=0)
            j = lps[j-1];
        else
            i++;

    }
    return -1;
}
