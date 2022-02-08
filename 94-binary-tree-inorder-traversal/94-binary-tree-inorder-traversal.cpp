class Solution {
    void ans(TreeNode* root, vector<int> &v)
    {
          if(root==NULL)
            return ;
      ans(root->left,v);
        v.push_back(root->val);
        ans(root->right,v);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        ans(root,v);
        
      
        
        return v;
        
        
    }
};