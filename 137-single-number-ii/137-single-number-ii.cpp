class Solution {
public:
    int singleNumber(vector<int>& nums) {
        long long mask = 1L << 31;
        int ans = 0;
        while(mask){
            int cnt = 0;
            for(int j = 0; j<nums.size(); j++){
                if(nums[j] & mask)
                    cnt++;
            }
            
            if(cnt%3 != 0)
                ans += mask;
            mask = mask>>1;
        }
        
        return ans;
    }
};