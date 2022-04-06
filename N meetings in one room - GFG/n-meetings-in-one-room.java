// { Driver Code Starts
import java.io.*;
import java.util.*;
import java.lang.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());

        while (t-- > 0) {
            String inputLine[] = br.readLine().trim().split(" ");
            int n = Integer.parseInt(inputLine[0]);

            int start[] = new int[n];
            int end[] = new int[n];

            inputLine = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++)
                start[i] = Integer.parseInt(inputLine[i]);

            inputLine = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) 
                end[i] = Integer.parseInt(inputLine[i]);
                
            int ans = new Solution().maxMeetings(start, end, n);
            System.out.println(ans);
        }
    }
}
// } Driver Code Ends


class Solution 
{
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static class Pair
    {
        int start,end;
        Pair(int start,int end)
        {
            this.start=start;
            this.end=end;
        }
    }
    public static int maxMeetings(int start[], int end[], int n)
    {
        // add your code here
        ArrayList<Pair>ls=new ArrayList<>();
        int count=1;
        for(int i=0;i<n;i++)
        {
            ls.add(new Pair(start[i],end[i]));
        }
        Collections.sort(ls,new Comparator<Pair>(){
            public int compare(Pair p1,Pair p2)
            {
                if(p1.end==p2.end)
                    return p1.start-p2.start;
                return p1.end-p2.end;
            }
            
        }    
        );
        int endTime=ls.get(0).end;
        for(int i=1;i<ls.size();i++)
        {
            Pair p=ls.get(i);
            if(endTime<p.start)
            {
                count++;
                endTime=p.end;
            }
        }
        return count;
    }
}