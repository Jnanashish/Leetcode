//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        int size = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] <= k){
                size++;
            }
        }
        int cnt = 0;
        for(int i = 0; i<size; i++){
            if(arr[i] > k){
                cnt++;
            }
        }
        int ans = INT_MAX;
        for(int i = size; i<n; i++){
            ans = min(ans, cnt);
            if(arr[i - size] > k) cnt--;
            if(arr[i] > k) cnt++;
        }
        ans = min(ans, cnt);
        return ans;
    }
};


//{ Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}

// } Driver Code Ends