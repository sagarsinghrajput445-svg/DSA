class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>ans;
        int i=0;
        int j=1;
        ans.push_back(nums[0]);
        while(j<nums.size()){
            if(nums[j]==ans[i]){
                j++;
            }
            else{
                ans.push_back(nums[j]);
                j++;
                i++;
            }
        }
        nums=ans;
        return ans.size();
    }
};