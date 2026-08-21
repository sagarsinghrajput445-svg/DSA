class Solution {
public:
    void helper(TreeNode* root,int maxA,int minA,int& maxAns){
        if(root==NULL) return;
        if(maxA<root->val) maxA=root->val;
        if(minA>root->val) minA=root->val;
        if(root->left==NULL && root->right==NULL){
            int result=maxA-minA;
            if(result>maxAns) maxAns=result;
            maxA=INT_MIN;
            minA=INT_MAX;
        }
        helper(root->left,maxA,minA,maxAns);
        helper(root->right,maxA,minA,maxAns);
    }
    int maxAncestorDiff(TreeNode* root) {
        int maxAns=INT_MIN;
        helper(root,INT_MIN,INT_MAX,maxAns);
        return maxAns;
    }
};