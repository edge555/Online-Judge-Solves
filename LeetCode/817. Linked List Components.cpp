class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        int cnt=0;
        bool f=false;
        unordered_map<int,bool>mp;
        for(auto x:nums){
            mp[x]=true;
        }
        while(head!=NULL){
            if(mp.find(head->val)==mp.end()){
                f=false;
            }
            else{
                if(!f){
                    cnt++;
                }
                f=true;
            }
            head=head->next;
        }
        return cnt;
    }
};
