class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        for (int col = 0; col < m; col++) {
            vector<int> temp;
            int i = 0, j = col;
            while (i < n && j < m) {
                temp.push_back(mat[i][j]);
                i++;
                j++;
            }
            sort(temp.begin(), temp.end());
            i = 0, j = col;
            for (int k = 0; k < temp.size(); k++) {
                mat[i][j] = temp[k];
                i++;
                j++;
            }
        }
        for (int row = 1; row < n; row++) {
            vector<int> temp;
            int i = row, j = 0;
            while (i < n && j < m) {
                temp.push_back(mat[i][j]);
                i++;
                j++;
            }
            sort(temp.begin(), temp.end());
            i = row, j = 0;
            for (int k = 0; k < temp.size(); k++) {
                mat[i][j] = temp[k];
                i++;
                j++;
            }
        }
        return mat;
    }
};
