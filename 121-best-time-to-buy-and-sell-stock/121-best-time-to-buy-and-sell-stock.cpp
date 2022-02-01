class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int temp=0;
        int min=INT_MAX;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
            }
            else if(prices[i]-min>temp)
                temp=prices[i]-min;
        }
        return temp;
        
    }
};