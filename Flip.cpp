#include<numeric>
vector<int> Solution::flip(string A) {
    vector<int> B;
    for_each(A.begin(),A.end(),[&](char l){
        if(l=='1'){B.push_back(1);}
        else{B.push_back(-1);}
    });
    if(accumulate(B.begin(),B.end(),0) == B.size()){vector<int> temp; return temp;}
    vector<int> ans(2,1);
    int num=0, sum=0, s=0, in = 0;
    
    for_each(B.begin(), B.end(), [&](int &t){
        sum+=t;
        if(sum > 0){
            sum = 0;
            s = in+1;
        }
        else if(sum  < num){
            num = sum;
            ans[0] = s+1;
            ans[1] = in+1;
        }
        in++;
    });
    
    return ans;
}
