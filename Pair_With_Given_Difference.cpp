int Solution::solve(vector<int> &A, int B) {
    unordered_set<int> uo;
    int in = -1;
    while(++in < A.size()){
        if(uo.find(B + A[in])!=uo.end()){
            return 1;
        }
        uo.insert(A[in]);
    }
    return 0;
}
