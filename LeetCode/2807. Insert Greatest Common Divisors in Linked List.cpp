class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==NULL){
            return head;
        }
        ListNode* ans=NULL;
        ListNode* temp=NULL;
        while(head->next!=NULL){
            if(temp==NULL){
                temp=new ListNode(head->val);
                ans=temp;
            }
            else{
                ListNode* nn=new ListNode(head->val);
                temp->next=nn;
                temp=temp->next;
            }
            ListNode* nn=new ListNode(__gcd(head->val,head->next->val));
            temp->next=nn;
            temp=temp->next;
            head=head->next;
        }
        temp->next=head;
        return ans;
    }
};
