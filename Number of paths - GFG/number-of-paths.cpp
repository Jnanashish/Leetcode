// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends
long long countpath(int i, int j, int m, int n){
    if(i == m-1 && j == n-1)
        return 1;
    if(i >= m || j>=n)
        return 0;
        
    return countpath(i+1,j,m,n) + countpath(i, j+1, m, n);
}

long numberOfPaths(int m, int n){
    // Code Here
    long long cnt = 0;
    
    cnt = countpath(0, 0, m, n);
    
    return cnt;
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