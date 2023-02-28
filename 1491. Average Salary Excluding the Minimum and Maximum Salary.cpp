class Solution {
public:
    double average(vector<int>& salary) 
    {
        int x = *max_element(salary.begin() , salary.end());
        int y = *min_element(salary.begin() , salary.end());
        double sum = (accumulate(salary.begin() , salary.end() , 0) - x - y);
        double avg = sum/(salary.size() - 2);
        return avg;
    }
};
