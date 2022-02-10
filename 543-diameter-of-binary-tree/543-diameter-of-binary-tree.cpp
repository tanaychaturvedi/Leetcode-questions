/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

int diameter (TreeNode *root,int &mx)
{
    if(root==NULL)
        return 0;
    int lh=diameter(root->left,mx);
    int rh=diameter(root->right,mx);
    mx=max(mx,lh+rh);
    return 1+max(lh,rh);
}

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
     
        int ans=0;
        int mx=0;
        diameter(root,mx);
        return mx;
        
    }
};