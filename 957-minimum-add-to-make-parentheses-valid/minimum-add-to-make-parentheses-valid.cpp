class Solution {
public:
    int minAddToMakeValid(string s) {
        string str="";
        stack<char>st;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(')
                st.push(s[i]);
            else {
                if (st.size() != 0 && st.top()=='(')
                    st.pop();
                else
                    st.push(s[i]);
            }
        }
        int len=0;
        while(st.size()>0){
            len++;
            st.pop();
        }
        return len;
    }
};