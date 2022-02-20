class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans = 0;
        long mask = 1L<<31;
        int x = a | b;
        while(mask){
            if((mask&x) != (mask&c)){
                
                if((mask&c) != 0){
                    
                    ans++;
                }
                else{
                   if((mask&a) == (mask&b))
                       ans = ans + 2;
                   else
                        ans++;
                }
            }
            mask = mask>>1;
        }
        return ans;
    }
};