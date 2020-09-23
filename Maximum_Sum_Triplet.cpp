vector<int> C;
int bs(int num){
    int l=0, h=C.size()-1, m;
    while(l < h){
        m = (l+h)/2;
        if(C[m] == num){return m-1;}
        else if(C[m] < num){h = m-1;}
        else {l = m;}
    }
    C.insert(C.begin()+l+1,num);
    return l;
}

int Solution::solve(vector<int> &A) {
    int max1=0;
    vector<int> B(A);
    for_each(B.rbegin(), B.rend(), [&](int &t){
        max1 = max(max1, t);
        t = max1;
    });

    int in = 1, sum = 0;
    C.push_back(A[0]);
    C.size();
    while(in < A.size()-1){
        if(C[0] > A[in]){C.insert(C.begin(), A[in]);}
        else if(C[C.size()-1] < A[in]){ 
            C.push_back(A[in]);
            sum = max(sum, C[C.size()-2]+B[in]+A[in]);
        }
        else{
            int num = bs(C.size());
            sum = max(sum, C[num]+B[in]+A[in]);
        }
        in++;
    }
    return sum;
}
