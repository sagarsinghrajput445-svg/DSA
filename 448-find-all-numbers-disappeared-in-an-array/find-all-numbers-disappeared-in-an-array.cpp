class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            int currentidx=nums[i]-1;
            if(i==currentidx || nums[i]==nums[currentidx]) i++;
            else swap(nums[i],nums[currentidx]);
        }
        vector<int>v;
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                v.push_back(i+1);
            }
        }
        return v;
    }
};