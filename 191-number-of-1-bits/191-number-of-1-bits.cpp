class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        // long long mask = 1L << 31;
        // while(mask){
        //     if(mask & n) cnt++;
        //     mask = mask >> 1;
        // }
        while(n){
            n = n & (n-1);
            cnt++;
        }
        return cnt;      
    }
};