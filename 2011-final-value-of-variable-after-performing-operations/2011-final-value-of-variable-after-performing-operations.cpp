class Solution {
public:
    int finalValueAfterOperations(vector<string>& s) {
        int x=0;
        for(auto i:s )
        {
            if(i=="++X" or i=="X++")
                x++;
            else
                x--;
        }
          return x;                                                                  
        
    }
};