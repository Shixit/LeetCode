class Solution 
{
public:
    set<int> s;
    bool isHappy(int n) 
    {
        int sum = 0;
        int digit;
        while(n>0)
        {
          digit = n%10;
          sum += digit*digit;
          n = n/10;
        }
        if((s.find(sum)) != s.end())
            return false;
        else if(sum == 1)
            return true;
        else
        {
            s.insert(sum);
        }
        return isHappy(sum);
    }
};
