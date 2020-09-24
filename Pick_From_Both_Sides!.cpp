int Solution::solve(vector<int> &A, int B) {
    vector<long long> front(B+1, 0), rear(B+1, 0);
    int in = -1, n=A.size();
    long long sum = -99999999;
    while(++in < B){
        front[in+1] = A[in]+front[in];
        rear[B-1-in] = A[n-1-in]+rear[B-1-in+1];
    }
    
    in=-1;
    while(++in <= B){
        sum = max((front[in] + rear[in]), sum);
    }
    return sum; 
}
