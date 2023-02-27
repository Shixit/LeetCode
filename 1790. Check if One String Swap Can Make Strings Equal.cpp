class Solution {
public:
    bool areAlmostEqual(string s1, string s2) 
    {
    //     int flag=0;
    //     int c=0;
    //     for(int i=0;i<s1.length();i++)
    //     {
    //         if(s1[i] != s2[i])
    //         {
    //             if(flag == 0)
    //             {
    //                 int j=i;
    //                 while(s2[j] != s1[i] && j < s1.length())
    //                 {
                        
    //                     c++;
    //                     j++;
    //                 }
    //                 swap(s2[i],s2[i + c]);
    //                 flag = 1;
    //             }
    //             else
    //                 return false;
    //         }
    //         else continue;
    //     }
    //     return true; 
        int left=0, right = s1.length()-1;
        if(s1 == s2)
            return true;
        while(s1[left] == s2[left])
            left++;
        while(s1[right] == s2[right])
            right--;
        swap(s2[left],s2[right]);
        return s1==s2;
     }


};
