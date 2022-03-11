class Solution {
public:
    
    TreeNode* solve(vector<int> nums,int l,int r){
        if(l>r) return NULL;
        int mid = l + (r-l)/2;
        TreeNode* lef = solve(nums,l,mid-1);
        TreeNode* rig = solve(nums,mid+1,r);
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = lef;
        root->right = rig;
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        TreeNode* root  = solve(nums,0,n-1);
        return root;
    }
};