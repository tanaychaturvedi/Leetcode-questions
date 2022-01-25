class Solution {
public:
    
    int search(int total, map<int,string> &mp)
    {
        int res = 0;
        for (auto i:mp)
        {
            if (i.first<=total)
            {
                res = max(res, i.first);
            }
        }
        return res;
    }
    
    string intToRoman(int num) {
        string res = "";
        vector<string> roman{"I", "V", "X", "L", "C", "D", "M","IV","IX", "XL", "XC", "CD","CM"};
        vector<int> number{1,5,10,50,100,500,1000,4,9,40,90,400,900};
        map<int, string> mp;
        for (int i=0; i<number.size(); i++) mp[number[i]] = roman[i];
        
        while(num)
        {
            int x = search(num, mp);
            res += mp[x];
            num -= x;
        }
        return res;
    }
};