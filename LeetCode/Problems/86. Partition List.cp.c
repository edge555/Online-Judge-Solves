class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* root=NULL;
        ListNode* root2=NULL;
        ListNode* tempr=NULL;
        ListNode* tempr2=NULL;
        while(head!=NULL){
            if(head->val<x){
                ListNode* nnode=new ListNode(head->val);
                if(root==NULL){
                    root=nnode;
                    tempr=root;
                }
                else{
                    root->next=nnode;
                    root=root->next;
                }
            }
            else{
                ListNode* nnode=new ListNode(head->val);
                if(root2==NULL){
                    root2=nnode;
                    tempr2=root2;
                }
                else{
                    root2->next=nnode;
                    root2=root2->next;
                }
            }
            head=head->next;
        }
        if(tempr==NULL){
            return tempr2;
        }
        if(tempr2==NULL){
            return tempr;
        }
        ListNode* ans=tempr;
        while(tempr->next!=NULL){
            tempr=tempr->next;
        }
        tempr->next=tempr2;
        return ans;
    }
};
