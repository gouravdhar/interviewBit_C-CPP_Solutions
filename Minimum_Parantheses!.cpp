int Solution::solve(string A) {
    int open = 0, close = 0;
    for(int i = 0; i<A.length(); i++)
        if(A[i] == '(')
            open++;
        else if(open == 0)
            close += 1;
        else
            open--;
    return open + close;
}
