#include<numeric>
int Solution::solve(vector<vector<int> > &A, int B) {
    vector<vector<int>> sum(A);
    vector<int> temp(A.size()+1, 0);
    
    for(int i = 0; i<A.size(); i++){
        sum[i].insert(sum[i].begin(), 0);
    }
    sum.insert(sum.begin(), temp);
    
    n = sum.size(), m = sum[0].size();
    for(int i = 1; i<n; i++){
        for(int j = 1; j<m; j++){
            sum[i][j] = sum[i][j] + sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1];
        }
    }
    
    long long ans= -99999999;
    for(int i = B; i<n; i++){
        for(int j = B; j<m; j++){
            long long temp = sum[i][j] + sum[i-B][j-B] - sum[i-B][j] - sum[i][j-B];
            if(temp > ans){
                ans = temp;
            }
        }
    }
    return ans;
}
