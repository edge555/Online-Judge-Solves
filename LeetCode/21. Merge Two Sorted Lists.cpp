class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;

        ListNode* temp=NULL;
        ListNode* result=NULL;

        if(l1->val<l2->val)
        {
            temp=new ListNode(l1->val);
            l1=l1->next;
        }
        else
        {
            temp=new ListNode(l2->val);
            l2=l2->next;
        }
        result=temp;
        while(1)
        {
            if(l1==NULL || l2==NULL)
                break;
            if(l1->val<l2->val)
            {
                temp->next=new ListNode(l1->val);
                temp=temp->next;
                l1=l1->next;
            }
            else
            {
                temp->next=new ListNode(l2->val);
                temp=temp->next;
                l2=l2->next;
            }
        }
        while(l1!=NULL)
        {
            temp->next=new ListNode(l1->val);
            temp=temp->next;
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            temp->next=new ListNode(l2->val);
            temp=temp->next;
            l2=l2->next;
        }
        return result;
    }
};
