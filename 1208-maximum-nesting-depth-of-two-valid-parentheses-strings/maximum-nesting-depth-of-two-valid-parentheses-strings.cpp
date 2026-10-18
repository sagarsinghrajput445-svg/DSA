class Solution {
public:
    vector<int> maxDepthAfterSplit(string s) {
        int num=0;
        vector<int>v;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                v.push_back(num%2);
                num++;
            }
            if(s[i]==')'){
                num--;
                v.push_back(num%2);
            }
        }
        return v;
    }
};