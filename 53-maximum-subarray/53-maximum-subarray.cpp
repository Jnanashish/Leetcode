class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum = 0;
        int maxsum = 0;
        int maxm = INT_MIN;
        
        for(int i = 0; i<nums.size(); i++){
            currsum = currsum + nums[i];
            maxsum = max(maxsum + nums[i], nums[i]);
            maxm = max(maxm, maxsum);
        }
        
        return maxm;
    }
};