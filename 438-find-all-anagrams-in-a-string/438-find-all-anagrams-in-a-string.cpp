class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<char,int> m,t;
        
        for(int i=0;i<p.size();i++)  m[p[i]]++;
       
        vector<int> v;
        
        for(int i=0;i<s.size();i++)
        {
            
         t[s[i]]++;
        
    
            if(i>=p.size()) {
                
                cout<<i<<" ";
                
                t[s[i-p.size()]]--;
                
                if(t[s[i-p.size()]]==0)
                    t.erase(s[i-p.size()]);
                
            }
            
                
            if(t==m) 
                v.push_back(i-p.size()+1);
                
        
        }
               
           return v;   
    }
};