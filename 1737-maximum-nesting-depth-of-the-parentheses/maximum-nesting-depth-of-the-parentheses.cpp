class Solution {
public:
    int maxDepth(string s) {
        int maxNum=0;
        int num=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                num++;
                if(maxNum<num) maxNum=num;
            }
            if(s[i]==')') num--;
        }
        return maxNum;
    }
};