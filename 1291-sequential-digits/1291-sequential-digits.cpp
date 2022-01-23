class Solution {
public:
    vector<int> ans;
    
    void help(int low,int high,int i,int num)
    {
        if(num >= low && num <= high )
        {
            ans.push_back(num);
        }
        if(num>high || i>9)
        {
            return;
        }
        help(low,high,i+1,num*10+i);
    }
    vector<int> sequentialDigits(int low, int high) {
        // vector<int> ans;
        for(int i=1;i<= 9;i++)
        {
            help(low,high,i,0);
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};