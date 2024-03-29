class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int l = 0;
        int h = nums.size();
        int mid;
        if(target > nums[h-1])
            return h;
        // if(h == 2)
        while(l<=h)
        {
            mid = (l+h)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                h = mid-1;
            else
                l = mid+1;
        }
        return l;
    }
};
