
class Solution {
public:
    int minInsertions(string s) {
        int count = 0;
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            int n = 2;
            if (s[i] == '(') {
                st.push('(');
            }
            else {
                int c=0;
                if (i + 1 < s.length() && s[i + 1] == ')') {
                    c = 2;
                    i++;
                }
                else {
                    c = 1;
                    count++;
                }
                if (st.empty()) {
                    count++;
                }
                else {
                    st.pop();
                }
            }
        }

        count += 2 * st.size();
        return count;
    }
};