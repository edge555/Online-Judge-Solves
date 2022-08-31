class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode* ans=NULL;
        ListNode* ans2=NULL;
        ListNode* temp=NULL;
        ListNode* temp2=NULL;
        while(head!=NULL){
            ListNode* nnode=new ListNode(head->val);
            if(temp==NULL){
                temp=nnode;
                ans=temp;
            }
            else{
                temp->next=nnode;
                temp=temp->next;
            }
            if(head->next!=NULL){
                head=head->next;
            }
            else{
                break;
            }
            ListNode* nnode2=new ListNode(head->val);
            if(temp2==NULL){
                temp2=nnode2;
                ans2=temp2;
            }
            else{
                temp2->next=nnode2;
                temp2=temp2->next;
            }
            head=head->next;
        }
        ListNode* root=ans;
        while(ans->next!=NULL){
            ans=ans->next;
        }
        ans->next=ans2;
        return root;
    }
};
