// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    
    int first_occ = -1, last_occ = -1;
    bool flag = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == x && flag == 0){
            last_occ = i;
            first_occ = i;
            flag = 1;
        } if(arr[i] == x){
            last_occ = i;
        }
    }
    vector<int> ans;
    ans.push_back(first_occ);
    ans.push_back(last_occ);
    return ans;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends