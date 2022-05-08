class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<pair<int,int>> pv;
        for(int i=0;i<n;i++)
        {
            pv.push_back(make_pair(nums[i],i));
        }
        sort(pv.begin(),pv.end());
        
        for(int i=0;i<n-1;i++)
        {
            if(pv[i].first == pv[i+1].first && abs(pv[i].second - pv[i+1].second)<=k)
            {
                return true;
            }
        }
        return false;
        /*
        int n = nums.size();
        if(n == 2)
        {
            if(nums[0] == nums[1])
                return true;
            return false;
        }
        for(int i=0;i<n-k+1;i++)
        {
            for(int j=i+1;j<i+k+1;j++)
            {
                if(nums[i] == nums[j])
                    return true;
            }
        }
        return false;*/
    }
};