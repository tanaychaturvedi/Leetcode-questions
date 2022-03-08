/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    bool find(TreeNode *root,TreeNode *f,vector<TreeNode*> &v) {
     if(root==NULL)return false;
        v.push_back(root);
        if(root==f)return true;
        if(find(root->left,f,v)|| find(root->right,f,v))return true;
        v.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode *> v1,v2;
        find(root,p,v1);
        find(root,q,v2);
        int i;
        if(v1.size()>v2.size()) {
            for( i=0;i<v2.size();i++) {
                if(v1[i]!=v2[i])break;
            }
        }
        else
        {
            for( i=0;i<v1.size();i++) {
                if(v1[i]!=v2[i])break;
            }
        }
        if(i!=0)return v1[i-1];
        return NULL;
    
    }
};