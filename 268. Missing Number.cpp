class Solution 
{
public:
    int missingNumber(vector<int>& nums) 
    {
        int n,c=0,ans;
        n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=c)
            {
                ans = i;
                break;
            }
            else 
                c++;
        }
        if(c == n)
            ans = n;
        return ans;
    }
};
