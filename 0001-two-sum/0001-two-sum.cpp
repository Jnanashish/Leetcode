class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um;
        for(int i = 0; i<nums.size(); i++){
            um[nums[i]] = i;
        }
        for(int i = 0; i<nums.size(); i++){
            int k = target - nums[i];
            if(um.find(k) != um.end() && i != um[k]){
                cout <<k<< i << nums[i]<< um[nums[i]];
                return vector<int> {i, um[k]};
            }
        }
        return vector<int> {-1, -1};
    }
};