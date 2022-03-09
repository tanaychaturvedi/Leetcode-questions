class Solution {
public:
    int minTimeToType(string word) 
    {
        int ans = min(abs(word[0]-'a'), 26-abs(word[0]-'a')) + 1;
        
        for(int i=1; i<word.length(); i++)
        {
            int temp = abs(word[i]-word[i-1]);    // Distance bw current & last characters
            ans += min(temp, 26-temp) + 1;        // Min distance between clockwise & anti-clockwise
        }
        
        return ans;
    }
};