class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL){
            return NULL;
        }
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        int r=cnt-n-1;
        if(r==-1){
            return head->next;
        }
        temp=head;
        while(r--){
            head=head->next;
        }
        if(head->next->next==NULL){
            head->next=NULL;
        }
        else{
            head->next=head->next->next;
        }
        return temp;
    }
};
