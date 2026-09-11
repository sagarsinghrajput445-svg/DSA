class Solution {
public:
    vector<string> topKFrequent(vector<string>& nums, int k) {
        vector<pair<int, string>> v;
        vector<string> ans;
        int n = nums.size();
        unordered_map<string, int> mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }
        for (auto ele : mp) {
            v.push_back({ele.second, ele.first});
        }
        sort(v.begin(), v.end(), [](auto& a, auto& b) {
            if (a.first != b.first)
                return a.first > b.first;

            return a.second < b.second;
        });
        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }

        return ans;
    }
};