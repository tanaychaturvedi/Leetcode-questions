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




class Solution {
    
    void inorder(TreeNode *root,vector<int> &v)
    {
        if(root==NULL)
            return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
        
        
    }
    
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        vector<int> v;
        inorder(root1,v);
        inorder(root2,v);
        sort(v.begin(),v.end());
        return v;
        
        
    }
};