class Solution {
public:
    bool flag = false;
    void solve(vector<vector<int>>& adj, vector<bool> &vis, int source, int dest){
           if(vis[source]) return ;
           vis[source] = true;
           for(auto src : adj[source]){
               if(src == dest) {
                   flag = true;
                   break;
               }
               solve(adj, vis, src, dest);
           }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
           if(source == destination) return true;
		   
           vector<vector<int>> adj(n+1);
           vector<bool> vis(n + 1, false);
		   
           for(auto edge : edges){
               adj[edge[0]].push_back(edge[1]);
               adj[edge[1]].push_back(edge[0]);
           }
         solve(adj, vis, source, destination);
         return flag;
    }
};
