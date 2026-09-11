class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        unordered_set<int> s;
        for (int i = 0; i < n; i++) {
            s.insert(nums[i]);
        }
        unordered_map<int, int> mp;
        for (auto ele : s) {
            if (s.find(ele - 1) == s.end()) {
                int x = 1;
                int curr = ele;
                while (s.find(curr + 1) != s.end()) {
                    curr++;
                    x++;
                }
                mp[ele] = x;
            }
        }
        int count = INT_MIN;
        for (auto ele : mp) {
            if (ele.second > count)
                count = ele.second;
        }
        return count;
    }
};