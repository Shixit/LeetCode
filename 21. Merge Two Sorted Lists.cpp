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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        if(list1 == NULL && list2 == NULL)
            return NULL;
        else if(list1 == NULL)
            return list2;
        else if(list2 == NULL)
            return list1;
      
      ListNode *temp;
      if(list1->val<=list2->val){
         
          temp=list1;
          list1=list1->next;
      }
      else {
          temp=list2;
          list2=list2->next;
      }
      ListNode *x=temp;
      while(list1 && list2){
          if(list1->val<=list2->val){
                x->next=list1;
                x=x->next;
                list1=list1->next;
          }
          else {
              x->next=list2;
              x=x->next;
              list2=list2->next;
          }
      }
      if(list1){
          x->next=list1;
      }
      else x->next=list2;

      return temp;



    }
  
};
