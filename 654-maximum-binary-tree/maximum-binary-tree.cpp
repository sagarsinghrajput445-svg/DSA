class Solution {
public:
     TreeNode* helper(vector<int>& arr, int lo, int hi){
        if(lo>hi){
            return NULL;
        }
        int maxIdx=-1;
        int maxi=INT_MIN;
        for(int i=lo;i<=hi;i++){
            if(arr[i]>maxi){
                maxi=arr[i];
                maxIdx=i;
            }
        }
        TreeNode* root=new TreeNode(arr[maxIdx]);
        maxi=INT_MIN;
        root->left=helper(arr,lo,maxIdx-1);
        root->right=helper(arr,maxIdx+1,hi);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& arr) {
        int n=arr.size();
        return helper(arr,0,n-1);
    }
};