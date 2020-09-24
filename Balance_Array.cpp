int Solution::solve(vector<int> &A) {
    if(A.size()<=2){return (A.size()%2);}
    vector<int> arr;
    int in = 1, sE = 0, sO = 0, ans = 0;
    arr.push_back(A[0]);
    arr.push_back(A[1]);
    A.push_back(0);
    A.push_back(0);
    
    while(++in < A.size()){
        arr.push_back(A[in] + arr[in-2]);
    }
    sE = ((A.size()-1) % 2) ? arr[A.size()-2] : arr[A.size()-1];
    sO = ((A.size()-1) % 2) ? arr[A.size()-1] : arr[A.size()-2];
    in = 1;
    
    while(++in < A.size()-2){
        int temp1 = (in%2) ? sO : sE;
        int temp2 = (in%2) ? sE : sO;
        int t1 = arr[in-1] + temp1 - arr[in+2]+A[in+2];
        int t2 = arr[in-2] + temp2 - arr[in+1]+A[in+1];
        ans = (t1 == t2) ? (ans+1) : ans;
    }
    if(sE-A[0] == sO){ans++;}
    if(sO-A[1]+A[0] == sE-A[0]){ans++;}
    
    return ans;
}
