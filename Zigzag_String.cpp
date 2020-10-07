string Solution::convert(string A, int B) {
    string ans = A;
    if(B==1)
        return ans;
    int n = A.length(), cnt = 0;
    for(int i=0; i<B; i++){
        int temp = i;
        while(temp < n){
            if(i!=(B-1)){
            ans[cnt++] = A[temp];
            temp = temp + 2*(B-i) - 2;
            }
            if(i!=0 && temp < n){
                ans[cnt++] = A[temp];
                temp = temp + 2*(i+1) -2;
            }
        }
    }
    return ans;
}
