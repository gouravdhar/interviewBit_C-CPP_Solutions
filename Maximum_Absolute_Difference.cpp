int Solution::maxArr(vector<int> &A) {
    int n = A.size();
    vector<int> B(A);
    vector<int> C(A);
    for(int i=0; i<n; i++){
        B[i] = (B[i] - i);
        C[i] = (C[i] + i);
    }
    int num1 = *max_element(B.begin(), B.end()) - *min_element(B.begin(),B.end());
    int num2 = *max_element(C.begin(), C.end()) - *min_element(C.begin(),C.end());
    return max(num1, num2);
}
