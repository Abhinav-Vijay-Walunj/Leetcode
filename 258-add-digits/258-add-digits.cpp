class Solution {
public:
    int addDigits(int num) {
        int temp=num,sum=0;;
        
        while(num/10 != 0)
        {
            sum=0;
            while(num>0)
            {
                sum=sum+num%10;
                num=num/10;
            }
            num=sum;
        }
        return num;
        
        
    }
};