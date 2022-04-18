class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_map<int, int> um;
        
        for(int i = 0; i<nums.size(); i++){
            um[nums[i]]++;
        }
        
        int ans = 0;
        
        for(int i = 0; i<nums.size(); i++){
            if(um.find(nums[i] - 1) == um.end()){
                int curr = nums[i];
                int currstreak = 1;
                
                while(um.find(curr + 1) != um.end()){
                    curr++;
                    currstreak++;
                }
                ans = max(ans, currstreak);
            }
        }
        return ans;
    }
};