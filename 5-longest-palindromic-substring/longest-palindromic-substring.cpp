
class Solution {
public:
    bool check(string str) {
        int i = 0;
        int j = str.length() - 1;

        while (i < j) {
            if (str[i] != str[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.length();
        string ans = "";
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            int l = i, r = i;
            // Odd length palindrome
            while (l >= 0 && r < n && s[l] == s[r]) {
                int len = r - l + 1;
                if (len > maxi) {
                    maxi = len;
                    ans = s.substr(l, len);
                }

                l--;
                r++;
            }
            // Even length palindrome
            l = i;
            r = i + 1;
            while (l >= 0 && r < n && s[l] == s[r]) {
                int len = r - l + 1;
                if (len > maxi) {
                    maxi = len;
                    ans = s.substr(l, len);
                }
                l--;
                r++;
            }
        }
        return ans;
    }
};
