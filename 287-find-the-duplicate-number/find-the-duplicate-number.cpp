class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int n=nums.size();
    int i=0;
    while(i<n){
       int currentIdx=nums[i];
    if(i==currentIdx) i++;
    else if(nums[i]!=nums[currentIdx]){
        swap(nums[i],nums[currentIdx]);
    }
    else{
        return nums[i];
        }
    }
    return 10000;
    }
};