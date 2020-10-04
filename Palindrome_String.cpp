int Solution::isPalindrome(string A) {
    int l=0, h = A.length()-1;
    while(l < h){
        while(!iswalnum(A[l]) && l<=h)
            l++;
        while(!iswalnum(A[h]) && h>=l)
            h--;
        if(l==h)
            return true;
        else if(iswalnum(A[l]) && iswalnum(A[h]) && tolower(A[l]) != tolower(A[h]))
            return false;
        l++;
        h--;
    }
    return true;
}
