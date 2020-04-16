/*
You are given a string s containing lowercase English letters, and a matrix shift, 
where shift[i] = [direction, amount]:

* direction can be 0 (for left shift) or 1 (for right shift). 
* amount is the amount by which string s is to be shifted.
* A left shift by 1 means remove the first character of s and append it to the end.
* Similarly, a right shift by 1 means remove the last character of s and add it to the beginning.

Return the final string after all operations.

Input: s = "abc", shift = [[0,1],[1,2]]
Output: "cab"
Explanation: 
[0,1] means shift to left by 1. "abc" -> "bca"
[1,2] means shift to right by 2. "bca" -> "cab"
*/

class Solution
{
public:
  string stringShift(string s, vector<vector<int>> &shift)
  {
    if (s.length() <= 1)
      return s;

    int left_shift = 0;
    int right_shift = 0;

    string result = "";

    for (vector<int> v : shift)
    {
      if (v[0] == 0)
        left_shift += v[1];
      else
        right_shift += v[1];
    }

    if (left_shift > right_shift)
    {
      left_shift -= right_shift;
      left_shift %= s.length();
      result += s.substr(left_shift, s.length() - left_shift);
      result += s.substr(0, left_shift);
    }
    else
    {
      right_shift -= left_shift;
      right_shift %= s.length();
      result += s.substr(s.length() - right_shift, right_shift);
      result += s.substr(0, s.length() - right_shift);
    }
    return result;
  }
};