class Solution {
public:
    bool isPalindrome(int x) 
    {
        string y = to_string(x);
        int flag = 0;
        for(int i=0; i < y.length(); i++)
        {
            if(y[i] == y[y.length()- i -1])
                flag = 1;
            else return false;
        }
        return true;

    }
};
