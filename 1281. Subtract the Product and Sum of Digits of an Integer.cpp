class Solution {
public:
    int subtractProductAndSum(int n) 
    {
       int digit;
       int prod=1, sum=0;
       while(n>0)
       {
            digit = n%10;
            n=n/10;
            prod *= digit;
            sum += digit;
       }
       int diff = prod - sum;
       return diff;
    }
};
