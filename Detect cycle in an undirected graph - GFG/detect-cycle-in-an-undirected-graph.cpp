// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool bfs(vector<int> adj[], bool *vis, int src){
        queue<pair<int, int>>q;
        q.push({src, -1});
        vis[src] = true;
        
        while(!q.empty()){
            int len = q.size();
            // while(len--){
                pair<int, int> ele = q.front();
                q.pop();
                
                for(int v : adj[ele.first]){
                    if(vis[v] == true && v != ele.second)
                        return true;
                    else if(!vis[v]){
                        vis[v] = true;
                        q.push({v, ele.first});
                    }
                }
            // }
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        bool vis[V+1] = {false};
       
        for(int i = 0; i<V; i++){
            if(!vis[i] && bfs(adj, vis, i)){
               return true;
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends