class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>v1;
        vector<int>v2;
        v1.push_back(nums[0]);
        v2.push_back(nums[1]);
        for(int i=2;i<n;i++){
            if(v1[v1.size()-1]>v2[v2.size()-1]) v1.push_back(nums[i]);
            else v2.push_back(nums[i]);
        }
        int n1=v1.size();
        int n2=v2.size();
        for(int i=0;i<n1;i++){
            nums[i]=v1[i];
        }
        for(int i=0;i<n2;i++){
            nums[n1+i]=v2[i];
        }
        return nums;
    }
};