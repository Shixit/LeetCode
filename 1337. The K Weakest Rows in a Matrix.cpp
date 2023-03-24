class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
    {
            // map<int,int> res;
            vector<pair<int,int>> freq;
            for(int i=0; i<mat.size(); i++)
            {
                // res.insert({(count(mat[i].begin(),mat[i].end(),1)), i});
                int x = count(mat[i].begin(),mat[i].end(),1);
                freq.push_back({x,i});
            }
            sort(freq.begin(),freq.end());
            vector<int> ans;
            for(int i=0; i<k; i++)
                ans.push_back(freq[i].second);

        return ans;

    }
};
