// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
       int i=1, j=n, mid, res;
       while(i<=j)
       {
            mid = i + (j-i)/2;
            if(isBadVersion(mid) == false)
                i = mid+1;
            else
            {
                res = mid;
                if(mid == 1 || isBadVersion(mid -1) == false)
                    return mid;
                else
                    j = mid - 1;
            }
       } 
       return res;
    }
};
