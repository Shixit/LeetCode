class Solution {
public:
    void subset(int i, vector<int>& nums, vector<int>& ds, vector<vector<int>>& res)
    {
        res.push_back(ds);
        for(int j=i; j<nums.size(); j++)
        {
            if(j != i && nums[j] == nums[j-1]) continue;
            ds.push_back(nums[j]);
            subset(j+1, nums, ds, res);
            ds.pop_back();
        }
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        vector<vector<int>> res;
        vector<int> ds;
        sort(nums.begin(), nums.end());
        subset(0, nums, ds, res);
        return res;
    }
};
