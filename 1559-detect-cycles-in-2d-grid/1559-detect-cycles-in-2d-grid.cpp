class Solution {
public:
    vector<pair<int, int>> move = {{1,0},{-1,0},{0,1},{0,-1}};
    bool dfs(vector<vector<char>>& grid,int m,int n,int pm, int pn,vector<vector<int>> &vi){
        if(vi[m][n])
            return true;
        else vi[m][n] = 1;
        
        // cout << grid[m][n]<<" ";
        for(int i = 0; i<move.size(); i++){
            int xx = m + move[i].first;
            int yy = n + move[i].second;
            
            if(xx>=0 && xx<grid.size() && yy>=0 && yy<grid[0].size() && grid[xx][yy]==grid[m][n]){
                // cout << grid[xx][yy]<<" ";
                if(!(xx==pm && yy==pn)){
                    if(dfs(grid, xx, yy, m,n, vi))
                        return true;           
                }
            }
        }
        return false;
    }
    
    bool containsCycle(vector<vector<char>>& grid) {
        
        vector<vector<int>> visited(grid.size(), vector<int>(grid[0].size(), 0));
        
        for(int i = 0; i<grid.size(); i++){
            for(int j = 0; j<grid[i].size(); j++){
                if(!visited[i][j] && dfs(grid, i, j,-1, -1, visited))
                    return true;
            }
        }
        
        return false;
    }
};