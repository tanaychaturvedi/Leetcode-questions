class Solution {
    void ans(TreeNode * root,  vector<int> &v)
    {
      
        if(root==NULL)
            return ;
        ans(root->left,v);
        v.push_back(root->val);
        ans(root->right,v);
        
    }
public:
    bool isValidBST(TreeNode* root) {
  vector<int> v;
   ans(root , v);
    
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]>=v[i+1])
                return false;
                
        }
        return true;
}};