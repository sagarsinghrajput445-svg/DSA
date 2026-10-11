class Solution {
public:
    int beautySum(string s) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            vector<int> freq(26, 0);
            for (int j = i; j < s.length(); j++) {
                freq[s[j] - 'a']++;
                int mini = INT_MAX;
                int maxi = INT_MIN;
                for (int i = 0; i < 26; i++) {
                    if (freq[i] > 0) {
                        mini = min(mini, freq[i]);
                        maxi = max(maxi, freq[i]);
                    }
                }
                sum += (maxi - mini);
            }
        }
        return sum;
    }
};