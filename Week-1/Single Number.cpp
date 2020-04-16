/*Given a non-empty array of integers, 
every element appears twice except for one. Find that single one.

Input: [2,2,1]
Output: 1

*/
class Solution
{
public:
  int singleNumber(vector<int> &nums)
  {
    int temp = 0;
    for (int i : nums)
    {
      temp = temp ^ i;
    }

    return temp;
  }
};