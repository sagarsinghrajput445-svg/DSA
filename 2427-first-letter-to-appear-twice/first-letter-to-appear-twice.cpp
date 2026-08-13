class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int>v(26,0);
        for(int i=0;i<s.length();i++){
           v[s[i]-97]++;
           if(v[s[i]-97]==2) return s[i];
        }
        return 'a';
    }
};