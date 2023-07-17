class Solution {
public:
    void sub(int i, vector<int>& nums, vector<int>& ds, vector<vector<int>>& res)
    {
        res.push_back(ds);
        for(int j=i; j<nums.size(); j++)
        {
            ds.push_back(nums[j]);
            sub(j+1, nums, ds, res);
            ds.pop_back();
        }
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> res;
        vector<int> ds;
        sort(nums.begin(), nums.end());
        sub(0, nums, ds, res);
        return res;
    }
};
