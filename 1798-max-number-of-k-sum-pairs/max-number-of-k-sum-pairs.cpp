class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            int rem=k-nums[i];
            if(m.find(rem)!=m.end()){
                count++;
                m[rem]--;
                if(m[rem]==0) m.erase(rem);
            }
            else m[nums[i]]++;
        }
        return count;
    }
};