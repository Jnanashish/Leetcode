// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
	int is_bleak(int n)
	{
	    // Code here.for
	    for(int i = n-1; i>0; i--){
	        int a = i;
	        int cnt = 0;
	        while(a){
	            a = a&a-1;
	            cnt++;
	        }
	        if(cnt+i == n)
	            return 0;
	    }
	    return 1;
	}
};


// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}
  // } Driver Code Ends