class Solution {
public:
    void inorderTraversal(TreeNode* root,vector<int>& v) {
        TreeNode* curr=root;
        while(curr!=NULL){
            if(curr->left!=NULL){ // find the pred
                TreeNode* pred=curr->left;
                while(pred->right!=NULL && pred->right!=curr){
                    pred=pred->right;
                }
                if(pred->right==NULL){ // link
                    pred->right=curr;
                    curr=curr->left;
                }
                else{ // curr->left==curr
                    pred->right=NULL;
                    v.push_back(curr->val);
                    curr=curr->right;
                }
            }
            else{ // curr->left==null
                v.push_back(curr->val);
                curr=curr->right;
            }
        }
    }
    TreeNode* helper(vector<int>& arr, int lo, int hi){
        if(lo>hi) return NULL;
        int mid=lo+(hi-lo)/2;
        TreeNode* root=new TreeNode(arr[mid]);
        root->left=helper(arr,lo,mid-1);
        root->right=helper(arr,mid+1,hi);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>v;
        inorderTraversal(root,v);
        int n=v.size();
        return helper(v,0,n-1);
    }
};