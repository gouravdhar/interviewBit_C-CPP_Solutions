int Solution::solve(vector<int> &A, int B) {
    int s=0, e=0, cnt = 0, n=A.size(), sum = A[e];
    while(e<n){
        if(sum>=B){
            cnt+=(n-e);
            sum-=A[s];
            s++;
        }
        else{
            e++;
            sum += A[e];
        }
    }
    return n*(n+1)/2 - cnt;
}
