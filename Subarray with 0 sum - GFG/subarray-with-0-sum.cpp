// { Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_set<int> sumSet;

    // Traverse through array 
    // and store prefix sums
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += arr[i];

        // If prefix sum is 0 or 
        // it is already present
        if (sum == 0 
            || sumSet.find(sum) 
            != sumSet.end())
            return true;

        sumSet.insert(sum);
    }
    return false;
        //bool t[n+1];
        // int sum=0;
        // for(int i=0;i<n-1;i++)
        // {
        //     sum=0;
        //     for(int j=i+1;j<n;j++)
        //     {
        //         sum+=(arr[i]+arr[j]);
        //         if(sum == 0)
        //     {
        //         return true;
        //     }
        //     }
            
        // }
        // return false;
        //Your code here
    }
};

// { Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}  // } Driver Code Ends