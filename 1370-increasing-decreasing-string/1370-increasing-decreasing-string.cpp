class Solution {
public:
    string sortString(string s) {
        string res;
        map<char , int> m;
        for (int i =0; i < s.size(); i++){
            m[s[i]] += 1;
        }
        int n = s.size();
        int size = res.size();
        while(size!=n){
             for (map<char, int>::iterator itr = m.begin(); itr != m.end();itr++ ){
                if (itr->second != 0){
                    itr->second = itr->second - 1;
                    res.push_back(itr->first);
                    ++size;  
                }
            }
            //------
            for (map<char, int>::reverse_iterator it = m.rbegin(); it != m.rend();  it++){
                if (it->second != 0){
                    it->second = it->second - 1;
                    res.push_back(it->first);
                    ++size;
                }
            }
        }   
        return res;
    }
};