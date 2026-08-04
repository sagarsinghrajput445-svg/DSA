class Solution {
public:
    string removeDuplicates(string s) {
        stack<int>st;
        for(int i=0;i<s.length();i++){
            if(st.empty()) st.push(s[i]);
            else{
                if(st.top()==s[i]) st.pop();
                else st.push(s[i]);
            }
        }
        string str="";
        while(st.size()>0){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};