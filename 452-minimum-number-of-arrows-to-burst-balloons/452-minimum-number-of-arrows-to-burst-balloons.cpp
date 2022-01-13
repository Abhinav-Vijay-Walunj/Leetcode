class Solution {
    private:
    /*
    bool compareInterval(Interval i1, Interval i2)
{
    return (i1. < i2.start);
}
    
    bool comp(vector<vector<int>>& a,vector<vector<int>>& b)
    {
        return a[1]<b[1];
    }
    */
   
public:
     
    //int findMinArrowShots(vector<vector<int>>& points) {
        int findMinArrowShots(vector<vector<int>>& points) {
        if (points.empty()) return 0;
        sort(points.begin(), points.end(), [] (auto &p1, auto&p2) {
            return p1[1] < p2[1];
        });
        int end = points[0][1];
		
		// the reason res = 1 is that we need an arrow to destroy the last group. 
        int res = 1;
        for (auto point: points)
        {
            if (point[0] <= end) continue;
            res++;
            end = point[1];
        }
        return res;
    }
        /*
        if(points.size() == 0)
        {
            return 0;
        }
       // sort(points.begin(),points.end(), compareInterval);
        sort(points.begin(),points.end(),comp);
        
        int ans=1;
        int end=points[0][1];
        
        for(int i=1;i<points.size();i++)
        {
            if(points[i][0]>end)
            {
                ans++;
                end=points[i][1];
            }
            
            
        }
        return ans;
        */
    
};