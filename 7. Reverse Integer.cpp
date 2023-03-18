class Solution {
public:
     int reverse(int x) 
    {
      int n,ans=0;
        while(x!=0)
        {
            n = x%10;
            if(ans>pow(2,31)/10 || ans<-pow(2,31)/10)
                return 0;
            ans = (ans*10)+n;
            x = x/10;
        }
        return ans;
    }
};
