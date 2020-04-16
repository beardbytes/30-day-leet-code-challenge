/*
Given an integer array arr, count element x such that x + 1 is also in arr.

If there're duplicates in arr, count them seperately.

Input: arr = [1,2,3]
Output: 2
Explanation: 1 and 2 are counted cause 2 and 3 are in arr.
*/

class Solution
{
public:
  int countElements(vector<int> &arr)
  {
    unordered_set<int> s;
    int count = 0;
    for (int a : arr)
    {
      s.insert(a);
    }
    for (int i : arr)
    {
      if (s.find(i + 1) != s.end())
      {
        count++;
      }
    }
    return count;
  }
};