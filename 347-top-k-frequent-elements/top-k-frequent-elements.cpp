class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>>v;
        vector<int>ans;
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto ele: mp){
            v.push_back({ele.second,ele.first});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};