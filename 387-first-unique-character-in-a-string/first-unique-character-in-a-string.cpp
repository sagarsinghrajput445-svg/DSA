class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>v(26,0);
        for(int i=0;i<s.length();i++){
            v[s[i]-97]++;
        }
        for(int i=0;i<s.length();i++){
            if(v[s[i]-97]==1){
                 return i;
                 break;
            }
        }
        return -1;
    }
};