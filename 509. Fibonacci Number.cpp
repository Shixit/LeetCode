class Solution {
public:
    int fib(int n) 
    {
        if(n == 0)
            return 0;
        else if(n<3)
            return 1;
        int arr[30];
        arr[0] = 0;
        arr[1] = 1;
        for(int i=2; i<30; i++)
        {
            arr[i] = arr[i-1] + arr[i-2];
        }  
        int ans=0;
        ans = arr[n-1] + arr[n-2];
        return ans;
    }
};
