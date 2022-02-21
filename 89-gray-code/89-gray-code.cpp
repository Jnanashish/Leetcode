class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans;
        ans.push_back(0);
        ans.push_back(1);
        if(n == 1) return ans;
        
        long mask = 1<<1;
        
        
        while(n>1){
            vector<int> v;
            for(int i = 0; i<ans.size(); i++)
                v.push_back(ans[i]);
            for(int i = ans.size()-1; i>=0; i--){
                v.push_back(mask + ans[i]);
            }
            ans = v;
            mask = mask << 1;
            n--;
        }
        return ans;
    }
};