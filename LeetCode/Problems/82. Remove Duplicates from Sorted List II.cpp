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
        if(head==NULL)
            return NULL;
        ListNode* result=NULL;
        ListNode* temp=NULL;
        ListNode* cur=NULL;

        int last=-200;
        int cnt=0;
        while(head!=NULL)
        {
            if(last==-200)
            {
                last=head->val;
                head=head->next;
                cnt=1;
            }
            else
            {
                if(last==head->val)
                {
                    cnt++;
                    head=head->next;
                }
                else
                {
                    if(cnt==1)
                    {
                        if(temp==NULL)
                        {
                            temp=new ListNode(last);
                            result=temp;
                        }
                        else
                        {
                            temp->next=new ListNode(last);
                            temp=temp->next;
                        }

                    }
                    last=head->val;
                    head=head->next;
                    cnt=1;
                }
            }
        }
        if(cnt==1)
        {
            if(temp==NULL)
            {
                temp=new ListNode(last);
                result=temp;
            }
            else
            {
                temp->next=new ListNode(last);
                temp=temp->next;
            }
        }
        return result;
    }
};
