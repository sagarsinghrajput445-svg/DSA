class Solution {
public:
    vector<int> maxDepthAfterSplit(string s) {
        int num=0;
        vector<int>v;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                if(num%2==0){
                    v.push_back(0);
                }
                else v.push_back(1);
                num++;
            }
            if(s[i]==')'){
                num--;
                if(num%2==0){
                    v.push_back(0);
                }
                else v.push_back(1);
                
            }
        }
        return v;
    }
};