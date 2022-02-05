class Solution {
    int longest_increasing_subsequence(vector<int>& arr)
{
    vector<int> ans;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        auto it
            = lower_bound(ans.begin(), ans.end(), arr[i]);
        if (it == ans.end()) {
            ans.push_back(arr[i]);
        }
        else {
            *it = arr[i];
        }
    }
    return ans.size();
}
public:
    bool canBeIncreasing(vector<int>& nums) {

        //lis 
      int ans= longest_increasing_subsequence(nums);
        
        if(nums.size()-ans==1 || nums.size()-ans==0)
            return true;
        else
            return false;

    }
};