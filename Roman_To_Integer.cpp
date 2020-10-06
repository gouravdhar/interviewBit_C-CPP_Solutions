int val(char a){
    switch(a){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
    return 0;
}
int Solution::romanToInt(string A) {
    int ans = 0, i = 0;
    for(i = A.length()-1; i>0; i--){
        int temp = val(A[i]) - val(A[i-1]);
        if(temp == 4 || temp == 9 || temp == 40 || temp == 90 || 
            temp == 400 || temp == 900){
            ans += temp;
            i--;
        }
        else{
            ans += val(A[i]);
        }
    }
    if(i == 0)
        ans+=val(A[i]);
    return ans;
}
