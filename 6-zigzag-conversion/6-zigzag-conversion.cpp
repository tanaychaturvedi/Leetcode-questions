class Solution {
public:
   string convert(string s, int numRows)
{
    if(numRows == 1) return s;
    string v[numRows];
    int k = -1, j = 0;
    
    //O(s.size())
    while(j < s.size()){
	    int i;
	    for(i = k + 1; i < numRows; i++){
		    if(j == s.size()) break;
		
			v[i].push_back(s[j]);
    		j++;
	    }
	
	    for(i -= 2; i >= 0; i--){
		    if(j == s.size()) break;
		
		    v[i].push_back(s[j]);
		    j++;
	    }
	    k = 0;
    }

    string str;
    for(int i = 0; i < numRows; i++){
        str.append(v[i]);
    }

    return str;
}
};