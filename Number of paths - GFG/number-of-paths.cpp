// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends


long long numberOfPaths(int m, int n, int i = 0, int j =0){
    if(i == m-1 || j == n-1)
        return 1;
    if(i >= m || j>=n)
        return 0;
        
    int a = numberOfPaths(m,n,i+1,j);
    int b = numberOfPaths(m, n, i, j+1);
    return a + b;
    
}



// { Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>m>>n;
	    cout << numberOfPaths(m, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends