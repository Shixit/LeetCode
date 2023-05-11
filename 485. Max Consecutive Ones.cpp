class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int c=0;
        int res = -1;
// We could also define res = INT_MIN but this increases both time and space used.
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 1)
                c++;
            else
                c = 0;
            res = max(res, c);
        }
        return res;
    }
};
