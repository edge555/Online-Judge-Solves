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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return NULL;
        ListNode* result=NULL;
        ListNode* temp=NULL;

        while(head!=NULL)
        {
            if(head->val!=val)
            {
                if(temp==NULL)
                {
                    temp=new ListNode(head->val);
                    result=temp;
                }
                else
                {
                    temp->next=new ListNode(head->val);
                    temp=temp->next;
                }
            }
            head=head->next;
        }
        return result;
    }
};
