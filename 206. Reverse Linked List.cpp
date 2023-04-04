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
    ListNode* reverseList(ListNode* head) 
    {
        if(!head)
            return head;
        ListNode* prev, *curr, *temp;
        prev = head;
        curr = head->next;
        if(!curr)
            return head;
        temp = curr->next;

        prev->next = NULL;
        while(temp)
        {
            curr->next = prev;
            prev = curr;
            curr = temp;
            temp = temp->next;
        }
        curr->next = prev;
            
        return curr;

    }
};
