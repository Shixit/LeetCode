class Solution 
{
public:
    int romanToInt(string s) 
    {
         unordered_map<char, int> roman = { { 'I' , 1 }, { 'V' , 5 }, { 'X' , 10 },
                                      { 'L' , 50 }, { 'C' , 100 }, { 'D' , 500 },
                                   { 'M' , 1000 } };
        int n = s.length();
        int sum = roman[s[n-1]];
        for(int i = s.length()-2;i>-1;i--)
        {
            if(roman[s[i]] < roman[s[i+1]])
                sum -= roman[s[i]];
            else
                sum += roman[s[i]];
        }
        return sum;
    }
};
