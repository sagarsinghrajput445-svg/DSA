class Solution {
public:
    int solve(int val1, int val2, string ch) {
        if (ch == "+")
            return val1 + val2;
        else if (ch == "-")
            return val1 - val2;
        else if (ch == "*")
            return val1 * val2;
        else
            return val1 / val2;
    }
    int evalRPN(vector<string>& s) {
        stack<int> val;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == "+" || s[i] == "-" || s[i] == "*" || s[i] == "/") {
                int val2 = val.top();
                val.pop();
                int val1 = val.top();
                val.pop();
                int ans = solve(val1, val2, s[i]);
                val.push(ans);
            } else {
                val.push(stoi(s[i]));
            }
        }
        return val.top();
    }
};