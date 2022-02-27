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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<vector<int>> v;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()) {
            int n=q.size();
            vector<int> ans;
           
            for(int i=0;i<n;i++) {
                 TreeNode *t=q.front();
                 q.pop();
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
                ans.push_back(t->val);
            }
            v.push_back(ans);
        }
        vector<double> r;
        for(auto i:v) {
            double sum=0;
            for(auto j:i) {
                sum+=j;                
            }
            sum/=i.size();
            r.push_back(sum);
            
        }
        return  r;
    }
    
};