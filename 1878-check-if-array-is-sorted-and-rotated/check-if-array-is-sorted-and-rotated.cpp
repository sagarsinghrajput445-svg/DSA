class Solution {
    bool sorted(vector<int>nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]) return false;
        }
        return true;
    }
    void reversePart(int i, int j, vector<int>& nums) {
        while (i <= j) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
    }

public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int k=0;
        while(k<n){
            vector<int>temp=nums;
            reversePart(0, n - k - 1, temp);
            reversePart(n - k, n - 1, temp);
            reversePart(0, n - 1, temp);
            if(sorted(temp)) return true;
            else k++;
        }
        return false;
    }
};