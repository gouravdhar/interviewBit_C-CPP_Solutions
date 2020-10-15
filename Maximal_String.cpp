void swap(string &A, int i, int j){
    char temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}
void rec(string A, string &ans, int B){
    if(B == 0){
        if(A > ans)
            ans = A;
        return;
    }
    for(int i = 0; i<A.size()-1; i++)
        for(int j = i+1; j<A.size(); j++){
            string temp = A;
            swap(temp, i, j);
            rec(temp, ans, B-1);
        }
}
string Solution::solve(string A, int B) {
    string ans = A;
    rec(A, ans, B);
    return ans;
}
