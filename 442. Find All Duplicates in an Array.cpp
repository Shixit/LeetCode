class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        vector<int> res;
        
        sort(nums.begin(),nums.end());
        int ans;
        
        for(int i=0;i<nums.size()-1;i++)
          {
             ans=nums[i];
             if((ans^nums[i+1])==0)
                 { res.push_back(nums[i]);
                 }
             
          }
           return res; 
    }
};
