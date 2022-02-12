class Solution {
public:
    int ladder;
    
    int bfs(string &beginword,string &endword,unordered_set<string> &st )
    {
        queue<string> qq; // BFS
        
        qq.push(beginword);
       
        while(!qq.empty())
        {
            int n=qq.size();// I need to traverse every word in q (if word exist > 1)
            ladder++;
            
            while(n--)
            { 
                // working on each word by popping each iteration
                string cur=qq.front(); // getting top-most word
                qq.pop();
               
                
                
                for(int i=0;i<cur.length();i++) // traversing string
                {   
                    string temp=cur;
                    
                //now changing each letter to find out any similar word present or not
                for(char ch='a';ch<='z';ch++)
                {
                    temp[i]=ch; // changing  letters of word
                    
                    if(temp==cur) // if any letter made it to its ancestor OR parent again
                        continue;
                    
                    if(temp==endword) return ladder+1; // ENDWORD reached 
                    
                    if(st.count(temp)) // if exist in set
                    {
                        qq.push(temp); // adding in queue
                        st.erase(temp);// removing string from the set
                    }
                }
                } 
                }
                }
          return 0;
    }
    
    
    
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
     
        unordered_set<string> st;
        int ladder=0;
        
        
        
        for(auto &it:wordList) st.insert(it);
        
        if(st.count(endWord)==0) return ladder;
        
        //now traversing begin word through BFS
        return bfs(beginWord,endWord,st);
        
        
    }
};