int Solution::solve(vector<int> &A, int B) {
    vector<int> arr, left(A), right(A);
    int ans = 0, n = A.size(), in = -1;
    while(++in < n){
        if(A[in] == 0){arr.push_back(in);}
    }
    in = 0;
    while(++in < n){
        if(A[in] != 0){
            left[in] += left[in-1];
        }
        if(A[n-in-1] != 0){
            right[n-in-1] += right[n-in];
        }
    }
    if(arr.size() <= B){return n;}
    int st = 0, en = B-1;
    while(en < arr.size()){
        int temp = arr[en]-arr[st] + 1;
        if(arr[st] != 0){
            temp+=left[arr[st]-1];
        }
        if(arr[en] != (n-1)){
            temp+=right[arr[en]+1];
        }
        ans = max(temp, ans);
        st++,en++;
    }
    return ans;
}
