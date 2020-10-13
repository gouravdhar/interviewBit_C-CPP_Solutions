int Solution::isPalindrome(int A) {
    string a = to_string(A);
    string b = a;
    reverse(b.begin(), b.end());
    return (a == b);
}
