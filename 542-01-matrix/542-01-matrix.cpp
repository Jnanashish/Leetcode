class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>> ans(mat.size(), vector<int>(mat[0].size(), INT_MAX));
        queue<pair<int, int>> q;
        vector<pair<int, int>>direction = {{1,0},{-1,0},{0,1},{0,-1}};
        
        for(int i = 0; i<mat.size(); i++){
            for(int j = 0; j<mat[0].size(); j++){
                if(mat[i][j] == 0){
                    q.push({i, j});
                    ans[i][j] = 0;
                }
            }
        }
        
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

	        for(int i = 0; i<direction.size(); i++){
	            int xx = x + direction[i].first;
	            int yy = y + direction[i].second;
                
                if(xx<mat.size() && xx>=0 && yy>=0 && yy<mat[0].size()){
                    if(ans[xx][yy] > ans[x][y]+1){
                        ans[xx][yy] = ans[x][y]+1;
                        q.push({xx, yy});
                    }
                }
            }
            
        }
        
        return ans;
    }
};