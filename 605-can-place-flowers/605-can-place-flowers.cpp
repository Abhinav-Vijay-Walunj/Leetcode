class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int current = 0; const int size = flowerbed.size();
    for(int i = 0; i <= size; i++) {
        if (i < size && flowerbed[i] == 0) {
            current++;
            if (i == 0) current++;
            if (i == size - 1) current++;
        } else {
            n -= (current - 1) / 2;
            if (n <= 0) return true;
            current = 0;
        }
    }
    return false;
        /*
        int t=0,c=0,s;
        int k=flowerbed.size();
        for(int i=1;i<k-1;i++)
        {
            
            
            c=i;
            while(flowerbed[i] == 0)
            {
                i++;
                
            }
            t=i-c+1;
            
            if(t>0)
            {
                s=(t-1)/2;
                
                n=n-s;
            }
        }
        
        if(n>0)
        {
            return false;
        }
        return true;
        */
    }
};