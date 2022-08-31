class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return NULL;
        ListNode* result=NULL;
        ListNode* temp=NULL;

        temp=new ListNode(head->val);
        result=temp;

        while(head!=NULL)
        {
            if(head->val==temp->val)
                head=head->next;
            else
            {
                temp->next=new ListNode(head->val);
                temp=temp->next;
            }
        }
        return result;
    }
};
