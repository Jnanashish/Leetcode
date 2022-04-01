class Solution {
public:
    vector<int> ans;
    void helper(int low, int high){
        int p= 10;
        for(int i = 1; i<9; i++){
            int sum = 0;
            int num = 0;
            while(true){
                if(i + sum > 9)
                    break;
                num = (i+sum) + num * p;
                sum++;
                if(num >= low and num <= high){
                    ans.push_back(num);
                } else if(num > high)
                    break;
            }
        }
        return;
    }
    
    vector<int> sequentialDigits(int low, int high) {
        helper(low, high);
        sort(ans.begin(), ans.end());
        return ans;
    }
};