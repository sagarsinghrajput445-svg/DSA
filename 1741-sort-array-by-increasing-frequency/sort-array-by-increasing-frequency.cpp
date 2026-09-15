class Solution {
public:
    typedef pair<int,int>pi;
    vector<int> frequencySort(vector<int>& nums) {
         unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pi,vector<pi>,greater<pi>>pq;
        for(auto x: mp){
            pq.push({x.second,-x.first});
        }
        vector<int>ans;
        while(pq.size()>0){
            int ele=-pq.top().second;
            int fre=pq.top().first;
            while(fre>0){
                ans.push_back(ele);
                fre--;
            }
            pq.pop();
        }
        return ans;
    }
};