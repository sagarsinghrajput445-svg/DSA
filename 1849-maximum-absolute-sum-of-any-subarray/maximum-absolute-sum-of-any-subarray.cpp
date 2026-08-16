class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int currSum=0;
        int maxSum=-20000;
        int minSum=20000;
        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            maxSum=max(currSum,maxSum);
            minSum=min(currSum,minSum);
        }
        
        if(maxSum>0 && minSum<=0){
            return maxSum+abs(minSum);
        }
        else if(minSum>=0) return abs(maxSum);
        else return abs(minSum);
        
    }
};