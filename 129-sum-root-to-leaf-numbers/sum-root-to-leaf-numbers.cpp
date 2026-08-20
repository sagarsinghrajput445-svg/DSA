class Solution {
public:
    void helper(TreeNode* root, string s, vector<string>& ans){
        if(root==NULL) return;
        string a=to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            s+=a;
            ans.push_back(s);
            return;
        }
        helper(root->left,s+a,ans);
        helper(root->right,s+a,ans);
    }
    int sumNumbers(TreeNode* root) {
        vector<string>ans;
        helper(root,"",ans);
        int sum=0;
        for(int i=0;i<ans.size();i++){
            sum+=stoi(ans[i]);
        }
        return sum;
    }
};