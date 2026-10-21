class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& g) {
        int r=0;
        int c=0;
        int m=g.size();
        int n=g[0].size();
        int i=0;
        int j=0;
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        while(i >= 0 && i < m && j >= 0 && j < n){
            if (visited[i][j]) return {r, c};
            visited[i][j]=true;
            r=i;
            c=j;
            if(g[i][j]=='R'){
                j++;
            }
            else if(g[i][j]=='L'){
                j--;
            }
            else if(g[i][j]=='D'){
                i++;
            }
            else if(g[i][j]=='U'){
                i--;
            }
        }
        return {r,c};
    }
};