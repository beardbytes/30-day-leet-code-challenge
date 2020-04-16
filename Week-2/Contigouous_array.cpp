/*
Given a binary array, 
find the maximum length of a contiguous subarray with equal number of 0 and 1.

Input: [0,1]
Output: 2
Explanation: [0, 1] is the longest contiguous subarray with equal number of 0 and 1.
*/

class Solution
{
public:
  int findMaxLength(vector<int> &nums)
  {
    int maxlen = 0, count = 0;
    unordered_map<int, int> mp;
    mp[0] = -1;
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] == 1)
        count++;
      else
        count--;

      if (mp.find(count) != mp.end())
        maxlen = max(maxlen, i - mp[count]);
      else
        mp[count] = i;
    }
    return maxlen;
  }
};
