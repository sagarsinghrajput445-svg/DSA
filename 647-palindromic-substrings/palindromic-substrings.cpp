
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

    int countSubstrings(string s) {
        int n = s.length();
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            int l = i, r = i;
            // Odd length palindrome
            while (l >= 0 && r < n && s[l] == s[r]) {
                int len = r - l + 1;
                maxi++;
                l--;
                r++;
            }
            // Even length palindrome
            l = i;
            r = i + 1;
            while (l >= 0 && r < n && s[l] == s[r]) {
                int len = r - l + 1;
                maxi++;
                l--;
                r++;
            }
        }
        return maxi;
    }
};
