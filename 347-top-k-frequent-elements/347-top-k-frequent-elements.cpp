class Solution {
private:
	// comparator function for sorting the vector of pairs in
	// non-increasing order of second elements
    static bool compare(pair<int,int>& a, pair<int,int>& b){
       return a.second > b.second;
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for (int& num : nums)
            mp[num]++;                        // stores the frequency of each num from the nums vector
        vector<pair<int,int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), compare);    // sorts the vector of pairs in non-increasing order of second elements
        nums.clear();
        for(int i=0; i<k; i++)
            nums.emplace_back(v[i].first);   // adds the first k most appeared elements in an empty vector
        return nums;
    }
};