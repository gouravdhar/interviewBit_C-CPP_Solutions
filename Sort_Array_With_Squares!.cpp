vector<int> Solution::solve(vector<int> &A) {
    vector<int> ans;
    int p1,p2,in=-1;
    while(++in < A.size()){
        if(A[in] >= 0)
            break;
    }
    p1 = in;
    p2 = in-1;
    while(p1 < A.size() || p2 >= 0){
        if(p1 < A.size() && p2 >= 0){
            int pw1 = pow(A[p1], 2);
            int pw2 = pow(A[p2], 2);
            if(pw1 < pw2){
                ans.push_back(pw1);
                p1++;
            }
            else{
                ans.push_back(pw2);
                p2--;
            }
        }
        else if(p1 < A.size()){
            ans.push_back(pow(A[p1], 2));
            p1++;
        }
        else if(p2 >= 0){
            ans.push_back(pow(A[p2], 2));
            p2--;
        }
    }
    return ans;
    
}
