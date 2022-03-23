class Solution {
public:
    
    vector<pair<int, int>> move = {{0,1},{0,-1},{1,0},{-1,0}};
    
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        
        queue<pair<int, int>> q;
        
        for(int i = 0; i<n; i++){
            if(board[i][0] == 'O'){
                q.push({i, 0});
                board[i][0] = 'A';
            }
            if(board[i][m-1] == 'O'){
                q.push({i, m-1});
                board[i][m-1] = 'A';
            }
        }
        
        for(int i = 0; i<m; i++){
            if(board[0][i] == 'O'){
                q.push({0, i});
                board[0][i] = 'A';
            }
            if(board[n-1][i] == 'O'){
                q.push({n-1, i});
                board[n-1][i] = 'A';
            }
        }
        
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            for(int i = 0; i<move.size(); i++){
                int xx = x + move[i].first;
                int yy = y + move[i].second;
                
                if(xx>=0 && xx<n && yy>=0 && yy<m && board[xx][yy]=='O'){
                    q.push({xx, yy});
                    board[xx][yy] ='A';
                }
                    
            }
        }
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(board[i][j]=='O')
                    board[i][j] = 'X';
                if(board[i][j]=='A')
                    board[i][j] = 'O';
            }
        }
        
    }
};