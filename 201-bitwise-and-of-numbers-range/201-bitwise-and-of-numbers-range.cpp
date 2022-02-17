class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        long long mask = 1L << 31;
        int ans = 0;
        while(mask){
            if((mask&left) == (mask&right)){
                if(mask&left)
                    ans += mask;
                mask = mask >> 1;
            } else {
                break;
            }
        }
        return ans;
    }
};