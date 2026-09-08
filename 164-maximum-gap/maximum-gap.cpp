class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n<2) return 0;
        sort(nums.begin(),nums.end());
        int maxCount=0;
        for(int i=1;i<n;i++){
            int count=abs(nums[i-1]-nums[i]);
            if(count>maxCount) maxCount=count;
        }
        return maxCount;
    }
};