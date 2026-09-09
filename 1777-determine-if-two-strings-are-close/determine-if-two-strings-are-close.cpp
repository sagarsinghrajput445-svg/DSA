class Solution {
public:
    bool closeStrings(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int>mp1,mp2;
        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        // comparing mp1 , mp2 (only char)
        for(auto ele: mp1){
            char ch=ele.first;
            if(mp2.find(ch)==mp2.end()) return false;
        }
        unordered_map<int,int>h1,h2;
        for(auto ele: mp1){
            int x=ele.second;
            h1[x]++;
        }
        for(auto ele: mp2){
            int x=ele.second;
            h2[x]++;
        }
        // comparing h1 , h2
        for(auto ele: h1){
            int x=ele.first;
            if(h2.find(x)==h2.end()) return false;
            if(h2[x]!=h1[x]) return false;
        }
        return true;
    }
};