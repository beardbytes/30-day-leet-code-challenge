/*
Given a non-empty, singly linked list with head node head, 
return a middle node of linked list.

If there are two middle nodes, return the second middle node.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
  ListNode *middleNode(ListNode *head)
  {
    ListNode *curr;
    int count = 0;
    for (curr = head; curr != NULL; curr = curr->next)
    {
      count++;
    }
    curr = head;
    for (int i = 0; i < count / 2; i++)
    {
      curr = curr->next;
    }
    return curr;
  }
};