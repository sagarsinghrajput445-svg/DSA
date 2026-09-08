class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int x=n/3;
        for(auto ele: m){
            if(ele.second>x) ans.push_back(ele.first);
        }
        return ans;
    }
};