class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        head=head->next;
        ListNode* temp=NULL;
        ListNode* ans=NULL;
        while(head!=NULL){
            int sum=0;
            while(head->val!=0){
                sum+=head->val;
                head=head->next;
            }
            ListNode* newNode = new ListNode(sum);
            if(temp==NULL){
                temp=newNode;
                ans=temp;
            }
            else{
                temp->next=newNode;
                temp=temp->next;
            }
            head=head->next;
        }
        return ans;
    }
};
