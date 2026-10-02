class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> s1;
        stack<char> s2;
        stack<char> s3;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ')')
                s1.push(s[i]);
            else {
                while (s1.top() != '(') {
                    s2.push(s1.top());
                    s1.pop();
                }
                s1.pop();
                while (s2.size() > 0) {
                    s3.push(s2.top());
                    s2.pop();
                }
                while (s3.size() > 0) {
                    s1.push(s3.top());
                    s3.pop();
                }
            }
        }
        string str = "";
        while (s1.size() > 0) {
            str += s1.top();
            s1.pop();
        }
        reverse(str.begin(), str.end());
        return str;
    }
};