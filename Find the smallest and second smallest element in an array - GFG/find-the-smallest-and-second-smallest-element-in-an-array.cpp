// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    vector<int> ans(2, INT_MAX);
    // ans[0] = INT_MAX, ans[1] = INT_MAX;
    for(int i = 0; i<n; i++){
        if(a[i] < ans[0]){
            ans[1] = ans[0];
            ans[0] = a[i];
        } else if(a[i] < ans[1] && a[i]!=ans[0]){
            ans[1] = a[i];
        }
    }
    if(n<2 || ans[1] == INT_MAX)
        return {-1};


    return ans;
}