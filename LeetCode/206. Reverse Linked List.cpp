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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=NULL;
        ListNode* temp2=NULL;
        while(head!=NULL)
        {
            if(temp2==NULL)
            {
                temp2=new ListNode(head->val);
                head=head->next;
            }
            else
            {
                temp=new ListNode(head->val);
                temp->next=temp2;
                temp2=temp;
                head=head->next;
            }
        }
        if(temp==NULL)
            return temp2;
        return temp;
    }
};
