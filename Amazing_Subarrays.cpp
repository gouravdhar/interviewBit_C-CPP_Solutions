bool isVow(char A){
    if(A == 'A' || A=='E' || A=='I' || A=='O' || A=='U'
        || A == 'a' || A=='e' || A=='i' || A=='o' || A=='u')
        return true;
    return false;
}
int Solution::solve(string A) {
    int cnt = 0, n = A.length();
    for(int i = 0; i<n; i++){
        if(isVow(A[i]))
            cnt += ((n-i) % 10003);
    }
    return cnt% 10003;
}
