class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> p;
        int sum=1;
        for(auto i: nums) p.push(i);
        for(int i=0;i<2;i++){
            int x=p.top();
            p.pop();
            sum*=(x-1);
        }
        return sum;
    }
};