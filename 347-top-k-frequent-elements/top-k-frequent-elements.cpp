class Solution {
public:
    typedef pair<int,int>pi;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pi,vector<pi>,greater<pi>>pq;
        for(auto x: mp){
            pq.push({x.second,x.first});
            if(pq.size()>k) pq.pop();
        }
        vector<int>ans;
        while(pq.size()>0){
            int ele=pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        return ans;
    }
};