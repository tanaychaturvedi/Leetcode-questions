class Solution {
public:
    int tot_sum=0;
    void solve(TreeNode* root,int sum){
        if(!root){
            return;
        }
        if(!root->left && !root->right){
            sum=(sum<<1)|root->val;
            tot_sum+=sum;
            return;
        }
        sum=(sum<<1)|root->val;
        solve(root->left,sum);
        solve(root->right,sum);
        return;
    }
    int sumRootToLeaf(TreeNode* root) {
        int sum=0;
        solve(root,sum);
        return tot_sum;
    }
};