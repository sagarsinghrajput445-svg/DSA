class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long num=x;
        long long rev = 0;
        while (x > 0) {
           // if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
            //    return 0;
            long long digit = x % 10;
            rev = rev * 10 + digit;
            x /= 10;
        }
        if(rev==num) return true;
        else return false;
    }
};