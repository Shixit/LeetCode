class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        if(nums.size() == 1)
            return nums[0];
        vector<int> sums(nums.size(), INT_MIN);
        for(int i=0;i<nums.size();i++)
        {
            int s=nums[i];
             if(sums[i] < s)
                sums[i] = s;
            for(int j=i+1;j<nums.size();j++)
            {
                s+=nums[j];
                // sums[i] = max_element(sums[i], s);
                if(sums[i] < s)
                    sums[i] = s;
            }
        }
        int ans = *max_element(sums.begin(),sums.end());
        return ans; 
        // int n=nums.size();
        //     int curr_max=0, maxi= INT_MIN;
        // for(int i=0; i<n;i++){
      
        //     curr_max= curr_max+nums[i];
        //     maxi= max(maxi, curr_max);
        //     if(curr_max<0)
        //     curr_max=0;
        // }
        // return maxi;   
    }
};
