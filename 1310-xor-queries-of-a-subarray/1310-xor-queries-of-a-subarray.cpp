class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int pxor[100000] = {0};
        pxor[0] = arr[0];
        for(int i = 1; i<arr.size(); i++){
            pxor[i] = (pxor[i-1]^arr[i]);
        }
        vector<int> ans;
        for(int i = 0; i<queries.size(); i++){
            int start = queries[i][0];
            int end = queries[i][1];
            if(start == 0)
                ans.push_back(pxor[end]);
            else
                ans.push_back(pxor[start-1]^pxor[end]);
        }
        return ans;
    }
};