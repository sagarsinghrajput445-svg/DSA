class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0)
                nums[i] = -nums[i];
        }
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> v;
        int mid = n / 2;
        int i = 0;
        int j = mid;
        while (i < mid && j < nums.size()) {
            v.push_back(nums[j]);
            v.push_back(nums[i]);
            j++;
            i++;
        }
        if (n % 2 != 0) {
            v.push_back(nums[n - 1]);
        }
        long long sum = 0;
        for (int i = 0; i < v.size(); i++) {
            if (i % 2 == 0)
                sum += v[i]*v[i];
            else
                sum -= v[i]*v[i];
        }
        return sum;
    }
};