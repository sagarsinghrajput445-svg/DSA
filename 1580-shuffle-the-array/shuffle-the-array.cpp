class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int x=nums.size();
        int i=0;
        int j=n;
        vector<int>v(x);
        for(int k=0;k<x;k++){
            if(k%2==0 && i<n){
                v[k]=nums[i];
                i++;
            }
            else{
                if(j<x){
                    v[k]=nums[j];
                    j++;
                }
            }
        }
        return v;
    }
};