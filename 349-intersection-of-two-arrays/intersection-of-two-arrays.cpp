class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1= nums1.size();
        int n2= nums2.size() ;
        vector<int>ans;
        unordered_set<int>s1,s2;
        for(int i=0;i<n1;i++){
            s1.insert(nums1[i]);
        }
        for(int i=0;i<n2;i++){
            s2.insert(nums2[i]);
        }
        for(auto ele: s1){
            if(s2.find(ele)!=s2.end()) ans.push_back(ele);
        }
        return ans;
    }
};