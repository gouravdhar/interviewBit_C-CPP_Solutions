int Solution::solve(int A) {
    long long sum = 0, in = -1;
    A = abs(A);
    while(++in < 1000000000){
        sum += in;
        if(A <= sum && (sum-A)%2 == 0){
            return in;
        }
    }
    return in;
}
