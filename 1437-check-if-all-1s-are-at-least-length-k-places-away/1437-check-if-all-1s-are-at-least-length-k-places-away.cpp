class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int prev=-1,pos; // prev stores previous occcuring 1s index and pos stores current 1s index
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                pos=i;
                if((pos-prev)<=k && prev!=-1) // prev=-1 takes care for the first encountered one
                    return false;
                prev=pos;
            }
        }
        return true;
    }
};