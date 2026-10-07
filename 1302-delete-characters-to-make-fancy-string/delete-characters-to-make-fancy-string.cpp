class Solution {
public:
    string makeFancyString(string s) {
        int count = 1;
        string str = "";
        str += s[0];
        for (int i = 1; i < s.length(); i++) {
            if (s[i - 1] == s[i]) {
                count++;
                if (count < 3)
                    str += s[i];
            } else {
                count = 1;
                str += s[i];
            }
        }
        return str;
    }
};