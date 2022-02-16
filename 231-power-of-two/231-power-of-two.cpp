class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        int cnt = 0;
        long long mask = 1L << 31;
        while(mask){
            if(mask & n) cnt++;
            mask = mask >> 1;
        }
        if(cnt == 1) return true;
        return false;
    }
};