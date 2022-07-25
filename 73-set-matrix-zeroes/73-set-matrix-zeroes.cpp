class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
	    int row = matrix.size();
	    int col = matrix[0].size();
        bool iscol = false, isrow = false;
        
        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                if(matrix[i][j] == 0){
                    if(j == 0){
                        iscol = true;
                    } 
                    if(i == 0){
                        isrow = true;
                    }
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        for(int i = 1; i<row; i++){
            for(int j = 1; j<col; j++){
                if(matrix[0][j] == 0 || matrix[i][0] == 0)
                    matrix[i][j] = 0;
            }
        } 
        if(iscol){
        for(int i = 0; i<row; i++){
            matrix[i][0] = 0;
        }
        }
        if(isrow){
        for(int i = 0; i<col; i++){
            matrix[0][i] = 0;
        }
        }
    }
};