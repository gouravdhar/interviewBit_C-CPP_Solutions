int Solution::solve(int A) {
    int num = A&1, c=0;
    while(!num){
        A=A>>1;
        num = A&1;
        c++;
    }
    return c;
}
