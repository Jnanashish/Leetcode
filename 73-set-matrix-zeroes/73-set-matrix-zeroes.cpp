class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int, int> um_col;
        unordered_map<int, int> um_row;
        
        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    um_col[j]++;
                    um_row[i]++;
                }
            }
        }
        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[0].size(); j++){
                if(um_col.find(j) != um_col.end() || um_row.find(i) != um_row.end()){
                    matrix[i][j] = 0;
                }
            }
        }
        
    }
};