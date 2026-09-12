class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1) nums[i]=1;
            else nums[i]=-1;
        }
        vector<int>pre(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=nums[i]+pre[i-1];
        }
        unordered_map<int,int>mp;
        mp[0]=-1;
        int ans=0;
        for(int i=0;i<n;i++){
            if(mp.find(pre[i])!=mp.end()){
                ans=max(ans,i-mp[pre[i]]);
            }
            else mp[pre[i]]=i;
        }
        return ans;
    }
};