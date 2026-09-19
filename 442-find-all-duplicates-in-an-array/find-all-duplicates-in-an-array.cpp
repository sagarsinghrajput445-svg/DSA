class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto ele: mp){
            if(ele.second==2) ans.push_back(ele.first);
        }
        return ans;
    }
};