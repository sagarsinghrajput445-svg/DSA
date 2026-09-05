class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
            if(lo==0){
                if(nums[lo]!=nums[lo+1]) return nums[lo];
            }
            if(hi==n-1){
                if(nums[hi]!=nums[hi-1]) return nums[hi];
            }
            if(lo<hi && nums[lo]==nums[lo+1]) lo++;
            if(lo<hi && nums[hi]==nums[hi-1]) hi--;
            if(nums[lo]!=nums[lo+1] && nums[lo]!=nums[lo-1]) return nums[lo];
            if(nums[hi]!=nums[hi+1] && nums[hi]!=nums[hi-1]) return nums[hi];
            else{
                lo++;
                hi--;
            }
        }
       return -1; 
    }
};