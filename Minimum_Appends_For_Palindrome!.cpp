int Solution::solve(string A) {
    string temp = A;
    reverse(temp.begin(), temp.end());
    temp = temp + " " + A;
    vector<int> lps(temp.length(), 0);
    int len = 0, j = 1;
    while(j<temp.length()){
        if(temp[j] == temp[len]){
            len++;
            lps[j] = len;
            j++;
        }
        else if(len!=0)
            len = lps[len-1];
        else
            j++;
    }
    return A.length() - lps[lps.size()-1];
}
