class Solution {
public:
    void comb(int i, int target, vector<int> &arr, vector<int> &ds, vector<vector<int>> &res)
    {
            if(target == 0)
            {
                res.push_back(ds);
                return;
            }
        for(int j=i; j<arr.size();j++)
        {
            if(j>i && arr[j]==arr[j-1]) continue;
            // check for same values and take one of them 
            if(arr[j] > target) break;
            ds.push_back(arr[j]);
            comb(j+1, target - arr[j], arr, ds, res);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        vector<vector<int>> res;
        vector<int> ds;
        sort(candidates.begin(), candidates.end());
        comb(0, target, candidates, ds, res);
        return res;        
    }
};
