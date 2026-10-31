class Solution {
public:
    int jump(vector<int>& nums) {
        int count=0;
        int pointer=0;
        int end=0;
        int n=nums.size();
        if(n==1) return 0;
        for(int i=0;i<n-1;i++){
            pointer=max(pointer,i+nums[i]);
            if(i==end){
                count++;
                end=pointer;
            }
        }
        return count;
    }
};