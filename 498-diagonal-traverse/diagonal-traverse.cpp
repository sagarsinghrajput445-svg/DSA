class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int>ans;
        for(int k=0;k<n+m-1;k++){
            vector<int>temp;
            int i;
            int j;
            if(k<m){
                i=0;
                j=k;
            }
            else {
                i=k-m+1;
                j=m-1;
            }
            while(i<n && j>=0){
                temp.push_back(mat[i][j]);
                i++;
                j--;
            }
            if(k%2==0) reverse(temp.begin(),temp.end());
            for(int p=0;p<temp.size();p++){
                ans.push_back(temp[p]);
            }
        }
        return ans;
    }
};