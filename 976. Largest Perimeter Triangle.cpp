class Solution {
public:
    int largestPerimeter(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        for(int i=nums.size() - 3;i>=0;i--)
        {
            if((nums.at(i) + nums.at(i+1)) > nums.at(i+2))
                {
                    return (nums.at(i) + nums.at(i+1) + nums.at(i+2));
                }
        }
        return 0;    
    }
};
