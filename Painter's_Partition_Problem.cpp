#define f(i, l, n) for(int i=l; i<n; i++)
#define v vector<int>
bool isPos(v C, int t, int A){
    int cur = 0, n = C.size();
    if(t <= 0)
        return false;
    f(i, 0, n){
        cur += C[i];
        if(C[i] > t)
            return false;
        if(cur > t){
            A--;
            cur = C[i];
        }
        if(A <= 0)
            return false;
    }
    return true;
}
long long srch(v C, int l, int h, int A){
    if(l > h)
        return h;
    int m = (l + h)/2;
    if(isPos(C, m, A) && !isPos(C, m-1, A))
        return m;
    else if(isPos(C, m, A))
        return srch(C, l, m-1, A);
    else
        return srch(C, m+1, h, A);
}
int Solution::paint(int A, int B, vector<int> &C) {
    long long sum = 0, n = C.size();
    f(i, 0, n)
        sum+=C[i];
    long long ans = srch(C, 0, sum, A) % 10000003;
    return (ans*B)%10000003;
}
