string Solution::longestCommonPrefix(vector<string> &A) {
    string s = A[0];
    for(int i = 1, j = 0; i<A.size(); i++, j = 0){
        while(j<min(A[i].length(), s.length()) && A[i][j] == s[j])
            j++;
        s = s.substr(0, j);
    }
    return s;
}
