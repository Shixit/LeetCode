/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
        ListNode *sp= head;
        ListNode *fp= head;

        while(fp!=NULL && fp->next!=NULL)
        {
            fp = fp->next->next;
            sp = sp->next;
            if(fp == sp)
                break;
        }
        if(fp == NULL || fp->next == NULL)
            return NULL;

        fp = head;
        while(fp != sp)
        {
            fp = fp->next;
            sp = sp->next;
        }
        return fp;
    }
};
