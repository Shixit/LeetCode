class Solution {
public:
    void comb(int i, int target, vector<int> &arr, vector<int> &ds, vector<vector<int>> &res)
    {
        if(i == arr.size())
        {
            if(target == 0)
            {
                res.push_back(ds);
            }
            return;
        }
        
        // PICK
        if(arr[i]<= target)
        {
            ds.push_back(arr[i]);            
            comb(i,target - arr[i],arr,ds,res);
            // this is important because you need to empty ds before testing new  set of elements
            ds.pop_back();
        }
        comb(i+1,target,arr,ds,res);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<vector<int>> res;
        vector<int> ds;
        comb(0, target, candidates, ds, res);
        return res;        
    }
};
