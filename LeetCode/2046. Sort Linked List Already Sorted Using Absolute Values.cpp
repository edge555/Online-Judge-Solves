class Solution {
public:
    ListNode* sortLinkedList(ListNode* head) {
        int pos=0,neg=0;
        ListNode* temp = head;
        while(temp->next){
            if(temp->val>=0){
                pos++;
            }
            else{
                neg++;
            }
            temp=temp->next;
        }
        if(neg==0){
            return head;
        }
        ListNode* negn = NULL;
        ListNode* posn = NULL;
        ListNode* rposn = NULL;
        ListNode* rnegn = NULL;
        temp=head;
        while(temp){
            if(temp->val<0){
                if(rnegn==NULL){
                    negn = new ListNode(temp->val);
                    rnegn = negn;
                }
                else{
                    ListNode* n = new ListNode(temp->val);
                    negn->next = n;
                    negn = negn->next;
                }
            }
            else{
                if(rposn==NULL){
                    posn = new ListNode(temp->val);
                    rposn = posn;
                }
                else{
                    ListNode* n = new ListNode(temp->val);
                    posn->next = n;
                    posn = posn->next;
                }
            }
            temp = temp->next;
        }
        ListNode* revNeg = NULL;
        ListNode* rRevNeg = NULL;
        while(rnegn){
            ListNode* n = new ListNode(rnegn->val);
            if(rRevNeg==NULL){
                revNeg = n;
                rRevNeg = revNeg;
            }
            else{
               ListNode* temp = n;
               temp->next = revNeg;
               revNeg = temp;

            }
            rnegn = rnegn->next;
        }
        ListNode* ans = revNeg;
        while(revNeg->next){
            revNeg = revNeg->next;
        }
        revNeg->next=rposn;
        return ans;
    }
};
