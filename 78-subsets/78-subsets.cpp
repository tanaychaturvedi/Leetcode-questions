class Solution {
public:
   void subset(vector<int> &arr, int vidx, vector<int> list,vector<vector<int>> &ans){
    if(vidx==arr.size()){
        ans.push_back(list);
        return;
    }        
      subset(arr,vidx+1,list,ans); // The element is not used to make the subset
      list.push_back(arr[vidx]);
      subset(arr,vidx+1,list,ans); // The element is used to make the subset
      list.pop_back();
  }

    vector<vector<int>> subsets(vector<int> &nums){
        vector<int> list;
        vector<vector<int>> ans;
        subset(nums, 0, list,ans);
        return ans;
    }
};