class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int len = nums.size();
	int ans = 0;
	unordered_map<int, int> sumCnt;
	sumCnt[0]++;
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += nums[i];
		if (sumCnt.count(sum - k)) ans += sumCnt[sum-k];
		sumCnt[sum]++;
	}
	return ans;
        /*
        int ans=0,sum=0,s=0,e=nums.size(),temp=0;
        map<int,int> mp;
        mp.insert(0,1);
        for(int i=0;i<e;i++)
        {
            sum+=nums[i];
            
            if(mp.find(sum-k) != mp.end())
            {
                
                ans+=
            }
        }
        
        while(s<e)
        {
            sum+=nums[s];
            if(sum == k)
            {
                ans++;
                sum-=nums[s];
                s++;
                //sum
            }
            if(sum>k)
            {
                sum-=nums[s];
                s++;
            }
        }
        return ans;
        /*
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                sum+=nums[j];
            }
        }
        */
    }
};