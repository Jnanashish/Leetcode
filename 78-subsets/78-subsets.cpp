class Solution {
public:
    vector<vector<int>> ans;
    void subs(vector<int>& nums, vector<int> &res,int i = 0){
        ans.push_back(res);
        if(i >= nums.size())
            return;
        
        for(int k = i; k<nums.size(); k++){
            res.push_back(nums[k]);
            subs(nums, res, k+1);
            res.pop_back();
        }
        return;
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> res;
        subs(nums, res);
        return ans;        
    }
};