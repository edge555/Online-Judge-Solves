class Solution {
public:
    ListNode* deleteNodes(ListNode* head, int m, int n) {
        ListNode* ans=NULL;
        ListNode* cur=NULL;
        int mm=m,nn=n;
        while(head){
            if(mm>0){
                if(cur==NULL){
                    cur=new ListNode(head->val);
                    ans=cur;
                }
                else{
                    cur->next=new ListNode(head->val);
                    cur=cur->next;
                }
                head=head->next;
                mm--;
            }
            else if(nn>0){
                head=head->next;
                nn--;
            }
            else{
                mm=m;
                nn=n;
            }
        }
        return ans;
    }
};
