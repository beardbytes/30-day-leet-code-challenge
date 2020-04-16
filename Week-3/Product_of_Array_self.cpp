/*
Given an array nums of n integers where n > 1,  return an array output 
such that output[i] is equal to the product of all the elements of nums except nums[i].

Input:  [1,2,3,4]
Output: [24,12,8,6]

Constraint: It's guaranteed that the product of the elements of any prefix or suffix of the array 
(including the whole array) fits in a 32 bit integer.

Note: Please solve it without division and in O(n).
*/

class Solution
{
public:
  vector<int> productExceptSelf(vector<int> &nums)
  {
    int len = nums.size();
    int L = 1;

    vector<int> answer(len, 1);

    for (int i = 0; i < len; i++)
    {
      answer[i] = L;
      L *= nums[i];
    }

    int R = 1;

    for (int i = len - 1; i >= 0; i--)
    {
      answer[i] *= R;
      R *= nums[i];
    }
    return answer;
  }
};