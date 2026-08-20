class Solution {
public:
    int prio(char ch) {
        if (ch == '+' || ch == '-')
            return 1;
        else
            return 2;
    }
    int solve(int val1, int val2, char ch) {
        if (ch == '+')
            return val1 + val2;
        else if (ch == '-')
            return val1 - val2;
        else if (ch == '*')
            return val1 * val2;
        else
            return val1 / val2;
    }
    int calculate(string s) {
        stack<int> val;
        stack<char> op;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                int num = 0;
                while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                val.push(num);
                i--;
            } else if (s[i] == '+' || s[i] == '-' || s[i] == '*' ||
                       s[i] == '/') {
                if (op.size() == 0 || prio(s[i]) > prio(op.top()))
                    op.push(s[i]);
                else {
                    while (op.size() > 0 && prio(s[i]) <= prio(op.top())) {
                        char ch = op.top();
                        op.pop();
                        int val2 = val.top();
                        val.pop();
                        int val1 = val.top();
                        val.pop();
                        int ans = solve(val1, val2, ch);
                        val.push(ans);
                    }
                    op.push(s[i]);
                }
            }
        }
        while (op.size() > 0) {
            char ch = op.top();
            op.pop();
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            int ans = solve(val1, val2, ch);
            val.push(ans);
        }
        return val.top();
    }
};