class Solution {
public:
    
    bool dfs(vector<vector<int>>& graph, vector<int>& vi, int ele, int col){ 
        // cout <<ele<<" "<< vi[ele]<<" "<<col<<endl;
        if(vi[ele] != 0){
            if(vi[ele] != col){
                return false;  
            }
            return true;
        }
        
        vi[ele] = col;
        if(col == 1) col = 2;
        else if(col == 2) col = 1;
        
        
        for(int i = 0; i<graph[ele].size(); i++){
            if(!dfs(graph, vi, graph[ele][i], col))
                return false;
        }
        
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        
        vector<int> vi(n+1, 0);
        bool ans = true;
    
        for(int i = 0; i<n; i++){
            if(vi[i] == 0){
                ans = ans && dfs(graph, vi, i, 1);        
            }
        }
        return ans;
    }
};