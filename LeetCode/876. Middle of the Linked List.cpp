class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* head2=head;
        while(head->next){
            head2=head2->next;
            head=head->next;
            if(head->next){
                head=head->next;
            }
        }
        return head2;
    }
};
