long p(long x, long n, long d){
    if(x==0)
        return 0;
    if(n==0)
        return 1;
    if(n==1)
        return x % d;
    if(n==2)
        return (x*x) % d;
    if(n%2==0)
        return p( p(x, n/2, d), 2, d);
    else 
        return (x * p( p(x, (n-1)/2, d), 2, d)) % d;
}
int Solution::pow(int x, int n, int d) {
    long ans= p(x, n, d);
    while(ans < 0)
        ans+=d;
    return ans;
}
