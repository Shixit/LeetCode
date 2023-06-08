class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        map<int,int> occ;
        vector<int> res;
        int min = nums.size()/3;
        for(int i=0;i<nums.size();i++)
        {
            occ[nums[i]]++;
        } 
        for(auto i: occ)
        {
            if(i.second > min)
                res.push_back(i.first);
        }   
        return res;    
    }
};
