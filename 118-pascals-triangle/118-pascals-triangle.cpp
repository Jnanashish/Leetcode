class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> curr;
        vector<vector<int>> ans;
        curr.push_back(1);
        ans.push_back(curr);
        if(numRows == 1) return ans;
        curr.push_back(1);
        ans.push_back(curr);        
        if(numRows == 2) return ans;
        numRows -= 2;
        while(numRows--){
            vector<int> temp;
            temp.push_back(1);
            for(int i = 0; i<curr.size()-1; i++){
                temp.push_back(curr[i] + curr[i+1]);
            }
            temp.push_back(1);
            ans.push_back(temp);
            curr = temp;
        }
        return ans;
    }
};