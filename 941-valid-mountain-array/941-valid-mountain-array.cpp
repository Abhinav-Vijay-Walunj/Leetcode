class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n <3)
        {
            return false;
        }
        
        int i=0;
        while(i+1<n and arr[i] < arr[i+1])
        {
            i++;
        }
        
        if(i == 0 or i == n-1)
        {
            return false;
        }
        
        while(i+1<n and arr[i] > arr[i+1])
        {
            i++;
        }
        
        if(i==n-1)
        {
            return true;
        }
        return false;
        /*
        int i,j;
        for(i=0;i<n-1;i++)
        {
            if(arr[i] == arr[i+1])
            {
                return false;
            }
            else if(arr[i] > arr[i+1])
            {
                break;
            }
        }
        
        for(int j=i;j<n-1;j++)
        {
            if(arr[i] <= arr[i+1])
            {
                return false;
            }
            
        }
        return true;
        */
    }
};