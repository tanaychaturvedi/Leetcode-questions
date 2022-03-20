// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
   bool dfs(int i, vector<int> adj[], int V, vector<int> &vis, vector<int> &rec)
{
   rec[i] = 1;
    vis[i] = 1;
     
       for (auto j:adj[i])
       {
           if (!vis[j]&& dfs(j,adj,V,vis,rec))
           {
               return true;
           }
           else if (rec[j])
           {
               return true;
           }
           
       }
   
   rec[i]=false;
   return false;
}
   
   
   
   
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>vis(V),rec(V);
       
       for(int i = 0; i < V; i++)
       {
       if ( !vis[i] && dfs(i,adj,V, vis, rec))
           return true;}

   return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends