class Solution {
public:
    int findMin(vector<int>& nums) {
        int mn=INT_MAX;
       for(int i=0;i<nums.size();i++){
            if(nums[i]<mn) mn=nums[i];
       }
       return mn;
    }
};