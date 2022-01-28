class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
         vector<vector<int>> v;
        if(intervals.size()==0)
            return v;
        sort(intervals.begin(),intervals.end());
        vector<int> tem=intervals[0];
        for(auto i:intervals)
        {
            if(i[0]<=tem[1])
                tem[1]=max(tem[1],i[1]);
            else
            {    v.push_back(tem);
                tem=i;
            }
        }
        v.push_back(tem);
        return v;
    }
};