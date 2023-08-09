class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int n = digits.size();
        for(int i=n-1;i>=0;i--)
        {
            if(i == n-1)
                digits[i]++;
            if(digits[i] == 10)
            {
                digits[i] = 0;
                if(i!=0)
                    digits[i-1]++;
                else
                {
                    digits.insert(digits.begin(), 1);
                }
            }
        }
        // SOLUTION BASED ON INTUTION (But all exceptions handled manually)
        // for(int i=n-1;i>0;i--)
        // {
        //     if(digits[i] == 9 || digits[i] == 10)
        //     {
        //         digits[i] = 0;
        //         digits[i-1]++;
        //     }
        //     else
        //     {
        //         digits[i]++;
        //         break;
        //     }
        // }
        
        // if(n==1 && digits[0] != 9)
        //     digits[0]++;
        // if(digits[0] == 10 || (n==1 && digits[0] == 9))
        // {
        //     digits[0] = 0;
        //     digits.insert(digits.begin(), 1);
        // }

        return digits;
    }
};
