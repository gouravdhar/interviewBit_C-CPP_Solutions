int Solution::solve(vector<int> &A) {
    int min = 999999, max = -999999;
    for_each(A.begin(), A.end(),[&](int &t){
        if(t > max){max = t;}
        if(t < min){min = t;}
    });
    return min+max;
}
