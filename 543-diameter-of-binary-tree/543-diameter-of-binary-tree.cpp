
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