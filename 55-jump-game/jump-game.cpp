class Solution {
public:
    bool canJump(vector<int>& nums) {
        int pointer=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>pointer) return false;
            pointer=max(pointer,i+nums[i]);
            if(pointer>=n-1) return true;
        }
        return false;
    }
};