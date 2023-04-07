class Solution {
public:
    //THIS IS RECURSIVE APPROACH
    int bs(int l, int h, vector<int>& nums, int x)
    {
        // if(l>h)
        //     return -1;
        while(l<=h)
        {
           int mid = (l+h)/2;
            if(nums[mid] < x)
                return bs(mid+1, h, nums, x);
            else if(nums[mid] > x)
                return bs(l, mid-1, nums, x);
            else if(x == nums[mid])
                return mid;
        }
        
        return -1;
    }
    int search(vector<int>& nums, int target) 
    {
        int l = 0;
        int h = nums.size() - 1;
        return bs(l,h,nums,target);    
    }
};
