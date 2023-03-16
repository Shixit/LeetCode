/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) 
    {
          ListNode* he=new ListNode(-1);
          ListNode* ho=new ListNode(-1);
          ListNode *te=he;
          ListNode *to=ho;
          int count=1;
          while(head!=NULL)
          {
            if(count%2==0)
            {
                te->next=head;
                te = te->next;
            }
            else
            {
                to->next=head;
                to = to->next;
            }
            head = head->next;
            count++;
          }
          to->next =he->next;
          te->next = NULL;
          return ho->next;  
    }
};
