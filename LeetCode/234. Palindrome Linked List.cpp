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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=NULL;
        ListNode* temp2=NULL;
        ListNode* head2=head;
        while(head2!=NULL)
        {
            if(temp2==NULL)
            {
                temp2=new ListNode(head2->val);
                head2=head2->next;
            }
            else
            {
                temp=new ListNode(head2->val);
                temp->next=temp2;
                temp2=temp;
                head2=head2->next;
            }
        }
        if(temp==NULL)
            temp=temp2;
        while(head!=NULL)
        {
            if(head->val!=temp->val)
                return false;
            head=head->next;
            temp=temp->next;
        }
        return true;
    }
};
