class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector <int> a;
        /*
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;
        while(i<j)
        {
            if(nums[i]+nums[j] == target)
            {
                a.push_back(i);
                a.push_back(j);
                break;
                
            }
            else if(nums[i]+nums[j] > target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        */
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((target == (nums[i]+nums[j])))
                {
                    a.push_back(i);
                    a.push_back(j);
                }
            }
        }
        return a;
    }   
    
};