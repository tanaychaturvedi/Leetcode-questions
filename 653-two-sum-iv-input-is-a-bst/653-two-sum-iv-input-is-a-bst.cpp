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
public:
    bool findTarget(TreeNode* root, int k) {
        
        TreeNode* curr=root;
        int c=0;
        map<int,int>m;
        inorder(curr,m,c,k);
        
        return c;
        
    }
    
    void inorder(TreeNode* root,map<int,int>&m,int &c,int k){
        
        if(root==NULL)return;
        
        inorder(root->left,m,c,k);
        int t=root->val;
        if(m.find(k-t)!=m.end()) {
            c=1;
        }
        else m[t]++;
        inorder(root->right,m,c,k);
    }
};