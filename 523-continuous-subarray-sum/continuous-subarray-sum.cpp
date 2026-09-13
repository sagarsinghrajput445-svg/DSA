class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        vector<int>pre(nums.size());
        pre[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            pre[i]=pre[i-1]+nums[i];
        }
        unordered_map<int,int>mp;
        mp[0]=-1;
        for(int i=0;i<pre.size();i++){
           int x=pre[i]%k;
           if(mp.find(x)!=mp.end()){
                if(i-mp[x]>=2) return true;
           }
           else mp[x]=i;
        }
        return false;
    }
};