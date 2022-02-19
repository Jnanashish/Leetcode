class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        long mask = 1L << 31;
        while(mask){
            int cnt = 0;
            for(int i = 0; i<nums.size(); i++){
                if(mask & nums[i])
                        cnt++;
            } 
            ans += cnt * (n - cnt);
            mask = mask >> 1;
        }
        return ans;
    }
};