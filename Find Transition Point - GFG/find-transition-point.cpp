// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    int start = 0, end = n-1;
    if(arr[end] == 0) return -1;
    if(arr[start] == 1) return 0;
    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] == 1 && mid > 0 && arr[mid-1] == 0)
            return mid;
        if(arr[mid] == 1)
            end = mid - 1;
        else 
            start = mid + 1;
        
    }
    return -1;
}