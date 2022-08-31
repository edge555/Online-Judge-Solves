class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL){
            return NULL;
        }
        map<ListNode*,bool>mp;
        while(true){
            if(mp.find(head)==mp.end()){
                mp[head]=true;
                if(head->next){
                    head=head->next;
                }
                else{
                    break;
                }
            }
            else{
                return head;
            }
        }
        return NULL;
    }
};
