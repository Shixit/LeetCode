class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        int c=0;
        for(int i=0;i<32;i++)
        {
            uint32_t mask = 1 << i;
            if(n & mask)
                c++;
        }

        return c;
    }
};
