/*
Given an integer array nums, find the contiguous 
subarray (containing at least one number) 
which has the largest sum and return its sum.

Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

*/

class Solution
{
public:
  int maxSubArray(vector<int> &nums)
  {
    int max_ending = 0, max_so_far = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
      max_ending += nums[i];
      if (max_so_far < max_ending)
      {
        max_so_far = max_ending;
      }
      if (max_ending < 0)
      {
        max_ending = 0;
      }
    }
    return max_so_far;
  }
};