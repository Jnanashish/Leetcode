class Solution {
public:
    
    vector<pair<int, int>> move = {{1,0},{-1,0},{0,1},{0,-1}};
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        queue<pair<int, int>> q;
        q.push({sr, sc});
        
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> vi(n, vector<int>(m, 0));
        
        int orgC = image[sr][sc];
        
        image[sr][sc] = newColor;
        vi[sr][sc] = 1;
        
        
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            
            for(int i = 0; i<move.size(); i++){
                int xx = x + move[i].first;
                int yy = y + move[i].second;
                
                
                if(xx>=0 && xx<n && yy>=0 && yy<m && image[xx][yy]==orgC && vi[xx][yy] == 0){
                    // cout << image[xx][yy]<<" ";
                    vi[xx][yy] = 1;
                    image[xx][yy] = newColor;
                    q.push({xx, yy});
                }
            }
        }
        return image;
    }
};