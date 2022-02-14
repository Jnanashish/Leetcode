class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        int sum = 0; 
        int s = 0, e = 0;
        
        while(e!=n){
            sum += nums[e];
            if(sum >= target){
                ans = min(ans, e - s + 1);
                while(sum >= target){
                    sum -= nums[s];
                    s++;
                    if(sum >= target)
                        ans = min(ans, e - s + 1);
                }
            }
            e++;
        }
        return ans == INT_MAX ? 0 : ans;
    }
};