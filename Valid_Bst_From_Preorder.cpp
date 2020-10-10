int Solution::solve(vector<int> &A) {
    stack<int> s;
    int temp = -2222;
    for(int i = 0; i<A.size(); i++){
        if(A[i] < temp)
            return false;
        while(!s.empty() && A[i] > s.top()){
            temp = s.top();
            s.pop();
        }
        s.push(A[i]);
    }
    return true;
}
