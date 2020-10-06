void compute(string &a, string &A, int &cnt){
    while(A[cnt]!='.' && cnt < A.length()){
        a.push_back(A[cnt]);
        cnt++;
    }
}

int Solution::compareVersion(string A, string B) {
    int i = 0, j = 0;
    while(i < A.length() && j < B.length()){
        string a = "0", b = "0";
        compute(a, A, i);
        compute(b, B, j);
        if(stold(a) > stold(b))
            return 1;
        else if(stold(a) < stold(b))
            return -1;
        if(a == "0" && b == "0")
            return 0;
        else if(b == "0")
            return 1;
        else if(a == "0")
            return -1;
        i++;
        j++;
    }
    while(i < A.length()){
        string a = "0";
        compute(a, A, i);
        if(stold(a) > 0)
            return 1;
        i++;
    }
    while(j < B.length()){
        string b = "0";
        compute(b, B, j);
        if(stold(b) > 0)
            return -1;
        j++;
    }
    if(i == A.length()+1 && j == B.length()+1)
        return 0;
    if(j == B.length()+1)
        return 1;
    else
        return -1;
}
