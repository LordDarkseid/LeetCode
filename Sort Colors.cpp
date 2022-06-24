/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.
*/

class Solution 
{
public:
    void sortColors(vector<int>& nums) 
    {
        int z{},o{},t{};
        int n= nums.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                z++;
            if(nums[i]==1)
                o++;
            if(nums[i]==2)
                t++;
        }
        for(int i=0;i<n;i++)
        {
            if(i<z)
                nums[i]=0;
            else if(i>=z&&i<z+o)
                nums[i]=1;
            else if(i>=z+o)
                nums[i]=2;
        }
    }
};
