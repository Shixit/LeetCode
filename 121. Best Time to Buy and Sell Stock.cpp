class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int min = INT_MAX;
        int curr_p=0, tot_p=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i] < min)
                min = prices[i];

            curr_p = prices[i] - min;
            if(tot_p < curr_p)
                tot_p = curr_p;
        }
        return tot_p;
    }
};
