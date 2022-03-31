class Solution {
public:
    string ans;
    int cnt = 0;
    void gensub(string s, int n, int k, string res = ""){
        if(res.length() == n){
            cnt = cnt+1;
            
            if(cnt == k){
                ans = res;
                return;
            }
            return;
        }
        
        for(int i = 0; i<s.length(); i++){
            int t = res.length();
            if(t > 0 and res[t-1] != s[i]){
                gensub(s, n, k, res+s[i]);
            } else if(t == 0){
                gensub(s, n, k, res+s[i]);
            }
        }
        return;    
    }
    
    string getHappyString(int n, int k) {
        string s = "abc";
        gensub(s, n, k);
        return ans.length() > 0 ? ans : "";
    }
};