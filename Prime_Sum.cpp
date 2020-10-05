#define f(i, l, n) for(int i=l; i<n; i++)
bool isPrime(int A){
    if(A==2)
        return true;
    f(i, 2, A){
        if((A%i)==0)
            return false;
    }
    return true;
}
vector<int> Solution::primesum(int A) {
    vector<int> ans;
    f(i, 2, A){
        if(isPrime(A-i) && isPrime(i)){
            ans.push_back(i);
            ans.push_back(A-i);
            return ans;
        }
    }
    return ans;
}
