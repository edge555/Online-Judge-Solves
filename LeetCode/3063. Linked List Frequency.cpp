class Solution {
public:
    ListNode* frequenciesOfElements(ListNode* head) {
        ListNode* ans=NULL;
        ListNode* cur=NULL;
        int cnt=0,last=-1;
        unordered_map<int,int>mp;
        while(head!=NULL){
            mp[head->val]++;
            head=head->next;
        }
        for(auto it:mp){
            if(cur==NULL){
                cur=new ListNode(it.second);
            }
            else{
                cur->next=new ListNode(it.second);
                cur=cur->next;
            }
            if(ans==NULL){
                ans=cur;
            }
        }
        return ans;
    }
};
