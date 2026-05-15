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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next)
        return head;

        ListNode* newnode=new ListNode(-2);
        ListNode* newn=newnode;
        ListNode* temp=head;
        while(temp!=nullptr)
        {
            if(temp->next!=nullptr && temp->val==temp->next->val)
            {
               temp=temp->next;
            }
            else
            {
                newn->next=temp;
                temp=temp->next;
                newn=newn->next;
            }
        }
        newn->next=nullptr;
        return newnode->next;
        
    }
};