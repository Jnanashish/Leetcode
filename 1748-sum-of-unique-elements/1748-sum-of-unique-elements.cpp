class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> um;
        
        for(int i = 0; i<nums.size(); i++){
            um[nums[i]]++;
        }
        
        int sum = 0;
        
        for(auto it = um.begin(); it!=um.end(); it++){
            if(it->second == 1)
                sum+=it->first;
        }
        
        return sum;
    }
};