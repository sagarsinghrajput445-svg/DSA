class Solution {
public:
    typedef pair<int,int> pi;
    struct compare {
        bool operator()(pi a, pi b) {
            if(a.first == b.first)
                return a.second < b.second;  // bada element pehle
            return a.first > b.first;        // chhoti frequency pehle
        }
    };
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        // custom comparator -> compare
        priority_queue<pi, vector<pi>, compare> pq;
        for(auto x : mp) {
            pq.push({x.second, x.first});
        }
        vector<int> ans;
        while(!pq.empty()) {
            int ele = pq.top().second;
            int fre = pq.top().first;
            while(fre > 0) {
                ans.push_back(ele);
                fre--;
            }
            pq.pop();
        }
        return ans;
    }
};