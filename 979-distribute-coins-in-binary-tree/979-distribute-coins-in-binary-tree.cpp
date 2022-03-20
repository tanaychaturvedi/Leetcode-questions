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
    
    int moves=0;
    int count(TreeNode *root) {
        if(root==NULL)return 0;
        int l= count(root->left);
        int r=count(root->right);
        moves+=abs(l)+abs(r);
        return l+r+root->val-1;
    }    
public:
    int distributeCoins(TreeNode* root) {
        vector<int> v;
       
        count(root);
        return moves;
    
        
        
    }
};