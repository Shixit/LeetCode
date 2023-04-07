class Solution {
public:
    int longestPalindrome(string s) 
    {
        int odd = 0;
        if(s.length() == 1)
            return 1;
        unordered_map<char, int> map;
        for(char c: s)
        {
            map[c]++;
        }
        for(auto i: map)
        {
            if((i.second)%2 == 1)
                odd++;
        }
        if(odd > 1)
            return (s.length() - odd + 1);

        return s.length(); 
    }
};
