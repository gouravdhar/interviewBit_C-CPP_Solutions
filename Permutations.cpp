void rec(vector<vector<int>> &ans, vector<int> &A, vector<int> a, vector<bool> vis){
    if(a.size() == A.size()){
        ans.push_back(a);
        return;
    }
    for(int i = 0; i<A.size(); i++){
        vector<bool> tv(vis);
        vector<int> t(a);
        if(tv[i]){
            tv[i]=false;
            t.push_back(A[i]);
            rec(ans, A, t, tv);
        }
    }
}
vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int>> ans;
    vector<bool> vis(A.size(), true);
    vector<int> a;
    rec(ans, A, a, vis);
    return ans;
}
