class Solution {
public:
    vector<string> ans;
    
    void gensub(string s, int n, string res = ""){
        if(res.length() == n){
            ans.push_back(res);
            return;
        }
        
        for(int i = 0; i<s.length(); i++){
            int t = res.length();
            if(t > 0 and res[t-1] != s[i]){
                gensub(s, n, res+s[i]);
            } else if(t == 0){
                gensub(s, n, res+s[i]);
            }
        }
        return;    
    }
    
    string getHappyString(int n, int k) {
        string s = "abc";
        gensub(s, n);
        return ans.size() >= k ? ans[k-1] : "";
    }
};