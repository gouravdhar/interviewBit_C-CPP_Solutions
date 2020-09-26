string Solution::solve(string A) {
    int n = A.length();
    for(int i = n-2; i>=0; i--){
        if(A[i] < A[i+1]){
            for(int j = n-1; j>=i+1; j--){
                if(A[j] > A[i]){
                    swap(A[i], A[j]);
                    break;
                }
            }
            sort(A.begin()+i+1, A.end());
            return A;
        }
    }
    return "-1";
}
