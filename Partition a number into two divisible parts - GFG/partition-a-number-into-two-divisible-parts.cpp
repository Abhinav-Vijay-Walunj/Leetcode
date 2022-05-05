// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string stringPartition(string str, int a, int b){
        int len = str.length();
        string s="";
    
    vector<int> lr(len+1, 0);
    lr[0] = (str[0] - '0')%a;
    for (int i=1; i<len; i++)
        lr[i] = ((lr[i-1]*10)%a + (str[i]-'0'))%a;
 
    
    vector<int> rl(len+1, 0);
    rl[len-1] = (str[len-1] - '0')%b;
    
    
    int power10 = 10;
    for (int i= len-2; i>=0; i--)
    {
        rl[i] = (rl[i+1] + (str[i]-'0')*power10)%b;
        power10 = (power10 * 10) % b;
    }
 int f=0;
    // Find a point that can partition a number
    for (int i=0; i<len-1 && f==0; i++)
    {
        // If split is not possible at this point
        if (lr[i] != 0)
            continue;
 
        // We can split at i if one of the following
        // two is true.
        // a) All characters after str[i] are 0
        // b) String after str[i] is divisible by b, i.e.,
        //    str[i+1..n-1] is divisible by b.
        if (rl[i+1] == 0)
        {
            for (int k=0; k<=i; k++)
                s += str[k];
 
            s+=" ";
 
            for (int k=i+1; k<len; k++)
                s+=str[k];
            f=1;
           // s=s+"yes";
            
        }
    }
 if(f == 0)
 {
     s+="-1";
 }
    //s=s+"NO";
    return s;
        // code here 
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {   
        int a,b;
        string S;
        cin >> S >> a >> b;
        Solution ob;
        cout << ob.stringPartition(S,a,b) << endl;
    }
    return 0; 
}   // } Driver Code Ends