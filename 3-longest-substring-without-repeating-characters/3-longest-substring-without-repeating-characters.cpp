class Solution {
public:
   int lengthOfLongestSubstring(string s) {
int start=0,end=0,n=s.length(),max_len=0;
set<char> st;
// st.insert(s[0]);
while(end<n)
{
st.insert(s[end]);
max_len=max(max_len,end-start+1);
end++;
if(st.find(s[end])!=st.end())
{
while(start<end)
{
if(st.find(s[end])!=st.end())
{
st.erase(s[start]);
start++;
}
else
break;
}

        }
        
    }
    max_len=max(max_len,end-start);
    return max_len;
}
};