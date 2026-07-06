class Solution {
public:
 ListNode* reverse(ListNode* head, int k,ListNode** nextNode) {
    ListNode* prev=nullptr;
    ListNode* curr=head;
    ListNode* front=nullptr;
    while(curr && k--)
    {
        front=curr->next;
        curr->next=prev;
        prev=curr;
        curr=front;
        
    }
     *nextNode=curr;
    return prev;
        
    }



    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || !head->next)
        return head;
        ListNode* temp=head;

            int count=0;
        while(temp && count<k){
            temp=temp->next;
            count++;
        }

        if(count<k) return head; 

        ListNode* nextNode=nullptr;
       ListNode* newHead= reverse(head,k,&nextNode);

        head->next=reverseKGroup(nextNode,k);
        return newHead;

        
    }
};
