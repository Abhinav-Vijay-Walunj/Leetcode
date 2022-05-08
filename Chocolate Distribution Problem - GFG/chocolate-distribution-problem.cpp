// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        if(n<m)
        {
            return -1;
        }
        int t=0,dif=INT_MAX;
        sort(a.begin(),a.end());
        for(int i=0;i<n-m+1;i++)
        {
            t=a[i+m-1]-a[i];
            if(t<dif)
                dif=t;
        }
        return dif;
    //code
    
    }   
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends