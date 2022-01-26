// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    static bool compare(pair<int,int> a,pair<int,int> b)
    {
        if(a.second == b.second)
        {
            return a.first>b.first;
        }
        return a.second>b.second;
    }
    vector<int> TopK(vector<int>& arr, int k)
    {
        vector<pair<int,int>> v;
        map<int,int> m;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for(auto x:m)
{
    v.push_back(x);
} 
sort(v.begin(),v.end(),compare);
vector<int> ans;

for(int i=0;i<k;i++)
{
    ans.push_back(v[i].first);
}
return ans;
/*
        unordered_map<int,int> mp;
        int n=array.size();
        for(int i=0;i<n;i++)
        {
            if(mp.find(array[i]) == mp.end())
            {
                mp.insert(make_pair(array[i],1));
            }
            else
            {
                mp[array[i]]++;
            }
        }
        priority_queue<pair<int,int>> pq;
        
        for(auto x:mp)
        {
            pq.push(x->second,x->first);
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<int> v;
        while(pq.size != 0)
        {
            v.push_back(pq.top());
            pq.pop();
        }
        return v;
        // code here
        */
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k ;
        cin>>n;
        
        vector<int>array(n);
        
        for(int i=0; i<n; i++)
            cin>>array[i];
            
        cin>>k;
        
        Solution obj;
        vector<int> result = obj.TopK(array,k);
        
        for(int i=0; i<result.size();i++)
            cout<<result[i]<<" ";

        cout<<"\n";

    }
    return 0;
}  // } Driver Code Ends