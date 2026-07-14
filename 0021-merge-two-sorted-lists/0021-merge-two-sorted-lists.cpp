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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if(!head1 && !head2)
        return nullptr;

        ListNode* dummy=new ListNode(0);
        ListNode* dumma=dummy;
        ListNode* temp1=head1;
        ListNode* temp2=head2;

        while(temp1!=nullptr && temp2!=nullptr)
        {
            if(temp1->val<=temp2->val)
            {
                dumma->next=temp1;
                temp1=temp1->next;
                dumma=dumma->next;
            }
            else
            {
                dumma->next=temp2;
                temp2=temp2->next;
                dumma=dumma->next;
            }
        }
        while(temp2!=nullptr)
        {
            dumma->next=temp2;
            dumma=dumma->next;
            temp2=temp2->next;
        }
        while(temp1!=nullptr)
        {
            dumma->next=temp1;
            dumma=dumma->next;
            temp1=temp1->next;
        }
        return dummy->next;
        
    }
};