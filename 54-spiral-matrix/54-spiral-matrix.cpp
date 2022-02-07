class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        vector<int> v;
        int sr = 0, er = n-1, sc = 0, ec = m-1;
	    while(sc<=ec and sr <= er){
            for(int i = sc; i<=ec; i++){
                v.push_back(a[sr][i]);
            }
            sr++;
            for(int i = sr; i<=er; i++){
                v.push_back(a[i][ec]);
            }
            ec--;
            if(sr <= er){
                for(int i = ec; i>=sc; i--){
                    v.push_back(a[er][i]);
                }               
            }

            er--;
            if(sc <= ec){
                 for(int i = er; i>=sr; i--){
                    v.push_back(a[i][sc]);
                }                
            }

            sc++;
	    }
        return v;        
    }
};