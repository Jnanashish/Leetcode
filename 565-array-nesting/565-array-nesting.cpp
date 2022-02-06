class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n = nums.size() - 1;
        int ans = 0;
        vector<int> v(n+1, 0);
        for(int i = 0; i<=n; i++){
            
            int cnt = 0;
            int a = i;
            
            while(true){
                a = nums[a];
                if(v[a]) 
                    break;
                cnt++;
                v[a] = 1;
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};