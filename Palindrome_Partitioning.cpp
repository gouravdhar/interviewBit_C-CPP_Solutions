bool ispal(string A, int st, int en){
    for(int i=st, j=en; i<j; i++,j--)
        if(A[i] != A[j])
            return false;
    return true;
}
void rec(vector<vector<string>> &ans, vector<string> a, string A, int st){
    if(st == A.size()){
        ans.push_back(a);
        return ;
    }
    for(int i = st; i<A.size(); i++)
        if(ispal(A, st, i)){
            vector<string>temp(a);
            temp.push_back(A.substr(st, i-st+1));
            rec(ans, temp, A, i+1);
        }
}
vector<vector<string> > Solution::partition(string A) {
    vector<vector<string>> ans;
    vector<string> a;
    rec(ans, a, A, 0);
    return ans;
}
