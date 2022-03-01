class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans =0;
        for(int i = 0; i<nums.size(); i++){
            int ind = nums[i];
            if(nums[i] < 0)
                ind = -1 * nums[i];
            // cout <<ind<<" "<< nums[ind-1]<<endl;
            if(nums[ind-1] < 0){
                ans = abs(nums[i]);
                break;
            }
            else 
                nums[ind-1] = -1*nums[ind-1];
        }
        for(int i = 0; i<nums.size(); i++){
            
            if(nums[i] < 0)
                nums[i] = nums[i]*-1;
        }
        return ans;
    }
};