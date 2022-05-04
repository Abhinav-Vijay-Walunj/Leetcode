class Solution {
public:
    double average(vector<int>& salary) {
        if(salary.size()==2) return 0;
        int mins = INT_MAX;
        int maxs = INT_MIN;
        double sum = 0;
        for(int x: salary){
            mins = min(mins,x);
            maxs = max(maxs,x);
            sum+=(double)x;
        }
        return (sum - (mins+maxs)) / (salary.size()-2);
        /*
        double t=0;
        int mn=INT_MAX,mx=INT_MAX;
        int n=salary.size(),f;
        for(int i=0;i<n;i++)
        {
            mn=min(mn,salary[i]);
            mx=max(mx,salary[i]);
            t+=salary[i];
//             f=0;
//             if(mn>salary[i])
//             {
//                 t=t+mn;
//                 mn=salary[i];
//                 t-=mn;
//                 f=1;
//             }
//             if(mx<salary[i])
//             {
//                 t=t+mn;
//                 mn=salary[i];
//                 t-=mn;
//                 f=1;
                
//                 // mx=salary[i];
//             }
//             if(f == 0)
//             {
//                 t+=salary[i];
//             }
            
        }
         t-=(mx+mn);
        double ans= double(t/(n-2));
        return ans;*/
    }
};