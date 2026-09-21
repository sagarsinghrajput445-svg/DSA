class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int xor1=0;
        for(auto ele: mp){
            if(ele.second==2) xor1^=ele.first;
        }
        return xor1;
    }
};