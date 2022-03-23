class Solution {
public:
    
    vector<pair<int, int>> move = {{1,0},{-1,0},{0,1},{0,-1}};
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        queue<pair<int, int>> q;
        q.push({sr, sc});
        
        int n = image.size();
        int m = image[0].size();
        
        int orgC = image[sr][sc];
        if(orgC == newColor)
            return image;
        
        image[sr][sc] = newColor;

        
        
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            
            for(int i = 0; i<move.size(); i++){
                int xx = x + move[i].first;
                int yy = y + move[i].second;
                
                
                if(xx>=0 && xx<n && yy>=0 && yy<m && image[xx][yy]==orgC){
                    image[xx][yy] = newColor;
                    q.push({xx, yy});
                }
            }
        }
        return image;
    }
};