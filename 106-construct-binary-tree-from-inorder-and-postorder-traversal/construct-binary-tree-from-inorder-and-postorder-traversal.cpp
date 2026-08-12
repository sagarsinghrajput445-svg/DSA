class Solution {
public:
    TreeNode* build(vector<int>& in, int inlo, int inhi, vector<int>& post,
                    int postlo, int posthi) {
        if (postlo < posthi)
            return NULL;
        TreeNode* root = new TreeNode(post[postlo]);
        if (postlo == posthi)
            return root;
        int i = inlo;
        while (i <= inhi) {
            if (in[i] == post[postlo])
                break;
            i++;
        }
        int leftCount = i - inlo;
        int rightCount = inhi - i;
        root->right = build(in, i + 1, inhi, post, postlo - 1, postlo - rightCount);
        root->left = build(in, inlo, i - 1,post, postlo - rightCount - 1,posthi);
        return root;
    }
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        int n = post.size();
        return build(in, 0, n - 1, post, n - 1, 0);
    }
};