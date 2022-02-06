class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n = nums.size() - 1;
        int ans = 0;
    
        for(int i = 0; i<=n; i++){ 
            if(nums[i] != -1){
                int cnt = 0;
                int a = i;
            
                while(nums[a] != -1){
                   // cout << a << " " <<nums[a]<<" "<<endl;
                    int temp = a;
                    a = nums[a];
                    cnt++;
                    nums[temp] = -1;
                }
                ans = max(ans, cnt);
            }
        }
        return ans;
    }
};