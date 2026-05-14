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
    ListNode* sortList(ListNode* head) {
     if(!head || !head->next)
     return head;

     ListNode* temp=head;
     int count=0;
     while(temp)
     {
        count++;
        temp=temp->next;

     }

      count=count/2;

     ListNode* prev=nullptr;
     ListNode* curr=head;

     while(count--)
     {
        prev=curr;
        curr=curr->next;
     }
     prev->next=nullptr;

     ListNode* curr1=sortList(head);
     ListNode* curr2=sortList(curr);
     ListNode* small=new ListNode(0);
     ListNode* smallP=small;

     while(curr1 && curr2)
     {
        if(curr1->val < curr2->val)
        {
            smallP->next=curr1;
            smallP=smallP->next;
            curr1=curr1->next;

        }
        else
        {
            smallP->next=curr2;
            smallP=smallP->next;
            curr2=curr2->next;

        }
     }

     while(curr1)
     {
        smallP->next=curr1;
        smallP=smallP->next;
        curr1=curr1->next;
     }

     while(curr2)
     {
        smallP->next=curr2;
        smallP=smallP->next;
        curr2=curr2->next;
     }

     return small->next;
        
        
    }
};