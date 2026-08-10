class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int ans=-1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=i){
                ans=i;
                break;
            }
            else ans=i+1;
        }
        return ans;
    }
};