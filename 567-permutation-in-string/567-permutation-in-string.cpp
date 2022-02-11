class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size()) return false;
        int n=s1.size();
        vector<int>freq(26,0),window(26,0);
        for(int i=0;i<n;i++){
            freq[s1[i]-'a']++;         
            window[s2[i]-'a']++;
        }
        if(freq==window) return true;
        for(int i=n;i<s2.size();i++){
            window[s2[i-n]-'a']--;
            window[s2[i]-'a']++;
            if(freq==window) return true;
        }
        return false;
    }
};