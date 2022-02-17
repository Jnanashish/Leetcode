class Solution {
public:
    int numSteps(string s) {
        int cnt = 0;
        int n = s.length()-1;
        int carry = 0;
        while(1){
            if(s.length() <= 1)
                break;
            if(s.back() == '0'){
                s.pop_back();
                cnt++;
            } else {
                carry = 1;
                cnt++;
                for(int j = s.length()-1; j>=0; j--){
                    if(s[j] == '0'){
                        carry = 0;
                        s[j] = '1';
                        break;
                    } else {
                        s[j] = '0';
                    }
                }
            }
        }
        return cnt+carry;
    }
};