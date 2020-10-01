int utmost(vector<int> A, int B){
    if(B==0)
        return 0;
    unordered_map <int, int> um;
    um.insert({A[0], 1});
    int cnt = 0, st = 0, en = 0, n = A.size();
    while(en < n){
        if(um.size() >= (B+1)){
            cnt += (n - en);
            um[A[st]]--;
            if(um[A[st]] <= 0){um.erase(A[st]);}
            st++;
            if(st > en){en = st;}
        }
        else{
            en++;
            if(um.find(A[en])!=um.end())
                um[A[en]]++;
            else
                um.insert({A[en], 1});
        }
    }
    return n*(n+1)/2 - cnt;
}
int Solution::solve(vector<int> &A, int B) {
    return utmost(A, B) - utmost(A, B-1);
}
