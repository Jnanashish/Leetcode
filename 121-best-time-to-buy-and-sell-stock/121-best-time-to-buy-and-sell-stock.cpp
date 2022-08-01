class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minm[n], maxm[n];
        
        minm[0] = prices[0];
        maxm[n-1] = prices[n-1];
        for(int i = 1; i<n; i++){
            minm[i] = min(minm[i-1], prices[i]);
        }
        for(int i = n-2; i>=0; i--){
            maxm[i] = max(maxm[i+1], prices[i]);
        }
        
        int diff = INT_MIN;
        for(int i = 0; i<n; i++){
            diff = max(diff, maxm[i]-minm[i]);
        }
        
        return max(diff, 0);
    }
};