class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long n = 0;
        
        int temp = x;
        while(temp > 0){
            n = n * 10 + temp%10;
            temp = temp/10;    
        }
        // cout << n;
        if(n == x)
            return true;
        return false;
    }
};