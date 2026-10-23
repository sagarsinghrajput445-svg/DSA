class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> set;
        for(int i=0;i<nums.size();i++){
            set.insert(nums[i]);
        }
        for(auto ele: set){
           ans.push_back(ele);
        }
        sort(ans.begin(),ans.end());
        nums=ans;
        return ans.size();
    }
};