string Solution::findDigitsInBinary(int A) {
    string ans = "";
    do{
        ans = to_string(A%2) + ans;
        A = A/2;
    }while(A);
    return ans;
}
