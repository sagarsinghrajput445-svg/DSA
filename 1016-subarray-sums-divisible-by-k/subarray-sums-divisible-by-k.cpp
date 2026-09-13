class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int>pre(nums.size());
        pre[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            pre[i]=pre[i-1]+nums[i];
        }
        unordered_map<int,int>mp;
        mp[0]=1;
        int ans=0;
        for(int i=0;i<pre.size();i++){
           int x = ((pre[i] % k) + k) % k;
           if(mp.find(x)!=mp.end()){
                ans+=mp[x];
           }
           mp[x]++;
        }
        return ans;
    }
};