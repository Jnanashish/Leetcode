class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int n=nums.size();
        for(auto i:nums)
        m[i]++;
        for(auto x:m){
            if(x.second>n/2)
            return x.first;
        }
        return -1;
    }
};