int Solution::solve(string A) {
    stack<char> brac;
    int in = -1;
    
    while(++in < A.length()){
        if(!brac.empty() && brac.top() == '(' && A[in] == ')')
            brac.pop();
        else 
            brac.push(A[in]);
    }
    
    return brac.empty() ? 1 : 0;
}
