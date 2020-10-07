bool ispal(string A, int i){
    A.erase(i, 1);
    int n = A.length();
    for(int i=0, j=A.length()-1; i<=j; i++, j--)
        if(A[i] != A[j])
            return false;
    return true;
}
int Solution::solve(string A) {
    int i = 0, j =0 ;
    for(i=0, j=A.length()-1; i<j; i++, j--)
        if(A[i] != A[j])
            if(ispal(A, i) || ispal(A, j))
                return true;
            else
                return false;

    if(i == j && ispal(A, i))
        return true;
    return false;
}
