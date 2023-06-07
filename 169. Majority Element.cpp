class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        map<int,int> occ;
        int min = nums.size()/2;
        for(int i=0;i<nums.size();i++)
        {
            occ[nums[i]]++;
        } 
        for(auto i: occ)
        {
            if(i.second > min)
                return i.first;
        }   
        return 0;
    }
};
