class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int s=1,e=piles[n-1];
        if( n == h)
        {
            return e;
        }
        else
        {
           // int temp,t1,ans=0;
            
            while(s<e)
            {
                int m=s+(e-s)/2;
                int t1=0;
                
                for(int j=0;j<n;j++)
                {
                    t1+=piles[j]/m+(piles[j]%m != 0);
                    /*
                    if(piles[j]%m > 0)
                    {
                        t1 = 1 + (piles[j]/m) ;
                    }
                    else
                    {
                        t1= (piles[j]/m);
                    }
                    */
                }
                
                if(h>= t1)
                {
                    e=m;
                }
                else
                {
                    s=m+1;
                }
                
            }
        }
        
        
        
        return e;
        
    }
};