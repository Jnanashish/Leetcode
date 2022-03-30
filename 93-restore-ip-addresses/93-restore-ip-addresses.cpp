class Solution {
public:
    vector<string> ans;
    bool isvalid(string s, int ind, int len){
        if(ind + len > s.length())
            return false;
        string tempstr = s.substr(ind, len);
        
        if(tempstr.size() > 1 && tempstr[0] == '0')
            return false;
        
        int num = stoi(tempstr);
        if(num > 255)
            return false;
        return true;
        
    }
    
    void genip(string s, int ind = 0, int used = 0, string res = ""){
        if(ind == s.length() && used == 4){
            res.pop_back();
            ans.push_back(res);
            return;
        }
        
        if(ind >= s.length() || used >= 4)
            return;
        
        if(isvalid(s, ind, 1))
            genip(s, ind + 1, used + 1, res + s.substr(ind,1) + ".");
        
        if(isvalid(s, ind, 2))
            genip(s, ind + 2, used + 1, res + s.substr(ind,2) + ".");
            
        if(isvalid(s, ind, 3))
            genip(s, ind + 3, used + 1, res + s.substr(ind,3) + ".");
    }
    vector<string> restoreIpAddresses(string s) {
            if (s.size() > 12) return {};
            
            genip(s);
            return ans;
    }
};