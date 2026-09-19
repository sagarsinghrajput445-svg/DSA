class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& q, int x) {
        int idx=1;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                mp[idx]=i;
                idx++;
            }
        }
        vector<int>ans;
        for(int i=0;i<q.size();i++){
            if(mp.find(q[i])!=mp.end()){
                ans.push_back(mp[q[i]]);
            }
            else ans.push_back(-1);
        }
        return ans;
    }
};