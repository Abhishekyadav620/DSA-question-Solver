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

        ListNode* dummy=new ListNode(0);
        dummy->next=head;

        ListNode* curr=head;
        ListNode* prev=dummy;
        ListNode* front=nullptr;

        while(curr!=nullptr)
        {
            front=curr->next;
            if(front!=nullptr && curr->val==front->val)
            {
                while(front!=nullptr && curr->val==front->val)
                {
                    front=front->next;
                }
                prev->next=front;
                curr=front;
            }
            else
            {
                prev=curr;
                curr=curr->next;
            }
        }
        return dummy->next;
        
    }
};