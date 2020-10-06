int Solution::solve(string A) {
    string temp = A;
    reverse(temp.begin(), temp.end());
    A = A + " " + temp;
    vector<int> lps(A.length(), 0);
    int i = 0, len = 0, j = 1;
    lps[0] = 0;
    while(j < A.length()){
        if(A[i] == A[j]){
            len++;
            lps[j] = len;
            j++;
            i++;
        }
        else if(len <= 0){
            len = 0;
            lps[j] = 0;
            j++;
            i = 0;
        }
        else{
            len--;
            i--;
        }
    }
    return temp.length() - lps[lps.size()-1];
}
