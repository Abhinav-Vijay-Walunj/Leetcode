// { Driver Code Starts
// CPP program to find maximum sum
// by selecting a element from n arrays
#include<bits/stdc++.h>

using namespace std;

// To calculate maximum sum by
// selecting element from each array
int maximumSum( int n,int m, vector<vector<int>> &a);



// Driver program to test maximumSum
int main() {
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<vector<int>> arr(n, vector<int>(m,0));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            cin>>arr[i][j];
            
        cout << maximumSum(n,m,arr)<<endl;
    
    }
    return 0;

}
// } Driver Code Ends


int maximumSum( int n,int m, vector<vector<int>> &a) {

for(int i=0;i<n;i++)
{
    sort(a[i].begin(),a[i].end());
}
reverse(a.begin(),a.end());
int t1=0,t2=a[0][m-1]+1,ans=0,f;
for(int i=0;i<n;i++)
{
    f=0;
    for(int j=m-1;j>=0;j--)
    {
        t1=a[i][j];
        if(t1 < t2)
        {
            ans+=t1;
            t2=t1;
            break;
        }
        else
        {
            f++;
        }
    }
    if( f == m)
    {
        return 0;
    }
}

return ans;
    // Complete the function
}