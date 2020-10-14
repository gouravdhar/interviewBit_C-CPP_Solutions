long cal(int a, int B){
    long ans = 1;
    while(a>=1){
        ans = ans * a;
        a--;
        if(ans > B)
            return ans;
    }
    return ans;
}
int nextn(vector<bool> &vis, int k){
    int cnt = 0;
    for(int i=1; i<vis.size(); i++){
        if(vis[i])
            cnt++;
        if(cnt == k){
            vis[i] = false;
            return i;
        }
    }
    return vis.size()-1;
}
void rec(string &ans, int i, int A, long B, vector<bool> &vis){
    if(i >= A)
        return ;
    long unit = cal(A-i-1, B);
    int pos = B/unit;
    int num = nextn(vis, pos+1);
    B = B%unit;
    ans = ans + to_string(num);
    
    rec(ans, i+1, A, B, vis);
}
string Solution::getPermutation(int A, int B) {
    string ans = "";
    vector<bool> vis(A+1, true);
    rec(ans, 0, A, B-1, vis);
    return ans;
}
