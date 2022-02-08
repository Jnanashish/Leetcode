class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) { 
	int row = matrix.size();
	int col = matrix[0].size();
	
	int rowarr[201] = {0};
    int  colarr[201] = {0};
 
	
	for(int i = 0; i<row; i++)
		for(int j = 0; j<col; j++){
			if(matrix[i][j] == 0){
				rowarr[i] = 1;
				colarr[j] = 1;
			}
		}
	
	
	for(int i = 0; i<row; i++)
		for(int j = 0; j<col; j++){
			if(rowarr[i] == 1 || colarr[j] == 1)
				matrix[i][j] = 0;
		}
    }
};