class Solution {
public:
    ListNode* deleteDuplicatesUnsorted(ListNode* head) {
        vector<int>vec;
        unordered_map<int,int>mp;
        ListNode* cur=head;
        while(cur){
            vec.push_back(cur->val);
            mp[cur->val]++;
            cur=cur->next;
        }
        cur=NULL;
        ListNode* ans=NULL;
        for(auto x:vec){
            if(mp[x]==1){
                if(cur==NULL){
                    cur=new ListNode(x);
                    ans=cur;
                }
                else{
                    cur->next=new ListNode(x);
                    cur=cur->next;
                }
            }
        }
        return ans;
    }
};
