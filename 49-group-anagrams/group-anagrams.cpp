class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<arr.size();i++){
            string x=arr[i];
            string x1=x;
            sort(x1.begin(),x1.end());
            mp[x1].push_back(x);
        }
        for(auto ele: mp){
            ans.push_back(ele.second);
        }
        return ans;
    }
};