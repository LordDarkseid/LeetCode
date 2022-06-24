/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.
*/
class Solution 
{
    public:
        int maxSubArray(vector<int>& nums) 
        {
            int sum{};
            int max{nums[0]};
            int n= nums.size();
            for(int i=0;i<n;i++)
            {
                sum+=nums[i];
                if(sum>max)
                {
                    max=sum;
                }
                if(sum<0)
                {
                    sum=0;
                } 
            }
            
            return max;
        }
};
