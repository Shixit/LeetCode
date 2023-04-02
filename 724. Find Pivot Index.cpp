class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int sum_i=0,sum_j=0,sum=0;

        for(int k=1;k<nums.size();k++)
            sum +=nums[k];

        if(nums.size()==1 || sum == 0)
            return 0;

        for(int i=1;i<nums.size();i++) 
        {   
            sum_i += nums[i-1];  
            sum_j=0;
            for(int j=nums.size()-1;j>i;j--)
            {
                sum_j += nums[j];
            }
            if(sum_i  == sum_j)
                return i;
        }   
        return -1;
    }
};
