class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int m = matrix.size();
        int n = matrix[0].size();
        if(matrix[0][0] == target)
            return true;
        if(target < matrix[0][0])
            return false;
        int flag;
        for(int i=0;i<m;i++)
        {
            if(matrix[i][0] > target)
            {
                flag = i-1;
                break;
            }
            else if(matrix[i][0] == target)
                return true;
            else flag = i;
        }
        for(int j=0;j<n;j++)
        {
            if(matrix[flag][j] == target)
            {
                return true;
            }
        }
        return false;
    }
};
