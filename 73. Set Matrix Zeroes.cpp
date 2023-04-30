class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int m = matrix.size();
        int n = matrix[0].size();

        if(m == 1 && n == 1)
            return;
        set<int> row;
        set<int> col;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j] == 0)
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(auto i : row)
        {
            for(int j=0; j < n; j++)
                matrix[i][j] = 0;
        }
        for(auto i : col)
        {
            for(int j=0; j < m; j++)
                matrix[j][i] = 0;
        }
    }
};
//Another approach would be to update the header of the particular row and column 
//which has a zero... then traverse them later and update whole row and column.
