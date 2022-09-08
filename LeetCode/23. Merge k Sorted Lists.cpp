class Solution {
public:
    struct comp {
        bool operator()(ListNode* const& n1, ListNode* const& n2)
        {
            return n1->val > n2->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0){
            return NULL;
        }
        int k=lists.size();
        priority_queue<ListNode*,vector<ListNode*>,comp>pq;
        bool f=false;
        for(int i=0;i<k;i++){
            if(lists[i]!=NULL){
                f=true;
                pq.push(lists[i]);
            }
        }
        if(!f){
            return NULL;
        }
        ListNode* temp=NULL;
        ListNode* ans=NULL;
        while(!pq.empty()){
            ListNode* n=pq.top();
            pq.pop();
            if(temp==NULL){
                temp=n;
                ans=temp;
            }
            else{
                temp->next=n;
                temp=temp->next;
            }
            if(n->next!=NULL){
                pq.push(n->next);
            }
        }
        return ans;
    }
};
