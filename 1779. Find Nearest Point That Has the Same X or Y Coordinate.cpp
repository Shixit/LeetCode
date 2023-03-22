class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) 
    {
        int index = -1;
        int dis1, dis = INT_MAX;
         for (int i = 0; i < points.size(); i++) 
         {
             if(points[i][0] == x || points[i][1] == y)
             {
                 dis1 = abs(x - points[i][0]) + abs(y - points[i][1]);
                 if(dis1 < dis)
                {
                    dis = dis1;
                    index = i;
                }
             }
         }
         return index;
    }
};
