class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        int count=1;
        for(int i=0; i<n; i++){
            q.push(i+1);
        }
        while(q.size()>1){
            while(count!=k){
                q.push(q.front());
                q.pop();
                count++;
            }
            q.pop();
            count=1;
        }
        return q.front();
    }
};