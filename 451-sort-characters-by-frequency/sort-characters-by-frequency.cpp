class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        vector<pair<int,char>>ans;
        for(auto ele: mp){
            ans.push_back({ele.second,ele.first});
        }
        sort(ans.rbegin(), ans.rend());
        string str="";
        for(int i=0;i<ans.size();i++){
            int fre=ans[i].first;
            while(fre>0){
                str+=ans[i].second;
                fre--;
            }
        }
        return str;
    }
};