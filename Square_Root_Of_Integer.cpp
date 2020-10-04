long root(long A, long l, long h){
    if(l > h)
        return h;
    long temp = (l + h)/2;
    long t = temp*temp;
    if(t == A)
        return (temp);
    else if(t < A)
        return root(A, temp+1, h);
    else
        return root(A, l, temp-1);
        
}
int Solution::sqrt(int A) {
    return root(A, 0, A);
}
