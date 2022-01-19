// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        //base case when initial value of jump is 0
        if(n <= 1)
        {
            return 0;
        }
        if(arr[0] == 0)
        {
            return -1;
        }//we take 3 var steps=arr[0] means how many steps we can take
        //maxreach=arr[0] means as how much long we can go that is arr[i]-i,
        //jump=1 initially we have to take at least one step so initialised to 1 and then whenever steps become 0 we jump;
        //i goes from 1 to n-1 ,maxreach is max of maxreah and arr[i]+i step -- and when step 0 thwn jump++ and update step by maxxreach-i
        int maxr=arr[0];
        int step=arr[0];
        int jump=1;
        
        for(int i=1;i<n;i++)
        {
            if(i == n-1)
            {
                return jump;
            }
            maxr=max(maxr,i+arr[i]);
            step--;
            if(step == 0)
            {
                jump++;
                if(i>=maxr)
                {
                    return -1;
                }
                step=maxr-i;
            }
        }
        return -1;
        // Your code here
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends