class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        int n = b.size();
        int m = b[0].size();
        for (int i = 0; i < n; i++) {
            unordered_map<char, int> mp1;
            for (int j = 0; j < m; j++) {
                if (b[i][j] == '.')
                    continue;
                mp1[b[i][j]]++;
                if (mp1[b[i][j]] > 1)
                    return false;
            }
        }
        for (int i = 0; i < m; i++) {
            unordered_map<char, int> mp2;
            for (int j = 0; j < n; j++) {
                if (b[j][i] == '.')
                    continue;
                mp2[b[j][i]]++;
                if (mp2[b[j][i]] > 1)
                    return false;
            }
        }
        for (int row = 0; row < 9; row += 3) {
            for (int col = 0; col < 9; col += 3) {
                unordered_map<char, int> mp;
                for (int i = row; i < row + 3; i++) {
                    for (int j = col; j < col + 3; j++) {
                        if (b[i][j] == '.')
                            continue;
                        mp[b[i][j]]++;
                        if (mp[b[i][j]] > 1)
                            return false;
                    }
                }
            }
        }
        return true;
    }
};