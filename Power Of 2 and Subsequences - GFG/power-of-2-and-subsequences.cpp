// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    long long numberOfSubsequences(int N, long long A[]){
        long long ans = 0;
        long long m = 1000000007;
        for(int i = 0; i<N; i++){
            long long mask = 1L << 31;
            int cnt = 0;
            while(mask){
                if(mask & A[i]) cnt++;
                mask = mask >> 1;
            }
            if(cnt == 1) ans++;
        } 
        // return (ans%m * (ans+1)%m)%m/2;
        return (1<<ans)-1;
    }

        
        

    
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        long long A[N];
        for(int i=0;i<N;++i){
            cin >> A[i];
        }
        Solution ob;
        cout << ob.numberOfSubsequences(N,A) << endl;
    }
    return 0; 
}   // } Driver Code Ends