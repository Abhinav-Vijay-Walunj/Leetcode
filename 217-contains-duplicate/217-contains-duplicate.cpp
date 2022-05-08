class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int n=nums.size(),k=0;
        set<int> s;
        
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        if(s.size()==n)
        {
            return false;
        }
        return true;
        /*
        sort(nums.begin(),nums.end());
        
        for(int j=0;j<n-1;j++)
        {
            if(nums[j]==nums[j+1])
            {
                k=1;
                break;
            }
        }
        
        if(k==1)
            return true;
        else
            return false;
            */
        
    }
};