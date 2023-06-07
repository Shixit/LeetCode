class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int c=0;
        // if(s.length() == 1)
        //     return 1; //we can directly return one without checking 
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i] != ' ' && i>=0)
            {
                c++;
            }
            else if(c==0)
                continue;
            else
                return c;
        }
        return c;
    }
};
