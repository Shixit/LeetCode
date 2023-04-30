class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int a=0,b=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 0)
                a++;
            else if(nums[i] == 1)
                b++;
            else if(nums[i] == 2)
                c++;
        }
        // Another way but high complexity
        // int j=0;
        // while(a--)
        // {
        //     nums[j] = 0;
        //     // a--;
        //     j++;
        // }
        // while(b--)
        // {
        //     nums[j] = 1;
        //     // b--;
        //     j++;
        // }
        // while(c--)
        // {
        //     nums[j] = 2;
        //     // c--;
        //     j++;
        // } 
        //BETTER APPROACH
          for(int i=0 ;i<nums.size(); i++)
        {
            if(a-- > 0)
            nums[i] = 0;
            else if(b-- > 0)
            nums[i] = 1;
            else
            nums[i] = 2;
        }       
    }
};
