class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int m=arr.size();
        int n=arr[0].size();
        for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
           int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
        cout<<endl;
    }
     for(int k=0;k<m;k++){
        int i=0;
        int j=m-1;
        while(i<=j){
            int temp=arr[k][i];
            arr[k][i]=arr[k][j];
            arr[k][j]=temp;
            i++;
            j--;
        }
    }

    }
};