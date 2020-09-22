#include <numeric>
int Solution::solve(int A, vector<int> &B) {
    if(A<3){return 0;}
    vector<int> C(B);
    partial_sum(B.begin(), B.end(), C.begin());
    if(C[C.size()-1]%3 != 0){return 0;}
    int target1 = C[C.size()-1]/3;
    int target2 = 2 * target1;
    int ans = 0, count1 = C[0]==target1 ? 1 : 0;
    
    for_each(C.begin()+1, C.end()-1, [&](int &t){
        if(t == target2){
            ans = ans + count1;
        }
        if(t == target1){
            count1++;
        }
    });

    return ans ;
}
