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
    int pos = -1;
    bool hasCycle(ListNode *head) 
    {
        vector<ListNode*> value;
        while(head !=NULL)
        {
            if(head->val==1e9) return true;
           head->val=1e9;
            head = head->next;
            
        }
        
        return false;
    }
};
