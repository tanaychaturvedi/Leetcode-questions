class Solution {
public:
    string addBinary(string a, string b) {
        int c=0;
        string s="";
        int l1=a.size();
        l1--;
        int l2=b.size();
        l2--;
        while(l1>=0 and l2>=0) {
            int sum=a[l1]-'0'+b[l2]-'0'+c;
            s.push_back((char)(48+(sum%2)));
            c=sum/2;
            l1--;
            l2--;
        }
        while(l1>=0){
             int sum=a[l1]-'0'+c;
            s.push_back((char)(48+(sum%2)));
            c=sum/2;
            l1--;
        }
        while(l2>=0) {
            int r=b[l2]-'0';
            r+=c;
            cout<<r<<" ";
            s.push_back((char)(48+(r%2)));
            c=r/2;
            l2--;
        }
        if(c==1)
            s.push_back('1');
        reverse(s.begin(),s.end());
        return s;
    }
};