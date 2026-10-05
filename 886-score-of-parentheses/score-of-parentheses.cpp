class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(0);
            }
            if (s[i] == ')') {
                if (st.top() == 0) {
                    st.pop();
                    st.top() += 1;
                } else {
                    int x = st.top() *= 2;
                    st.pop();
                    st.top() += x;
                }
            }
        }
        return st.top();
    }
};