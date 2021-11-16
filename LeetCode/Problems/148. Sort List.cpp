class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int>vec;
        while(head!=NULL){
            vec.push_back(head->val);
            head = head-> next;
        }
        sort(vec.begin(),vec.end());
        ListNode* hhead = new ListNode();
        head = NULL;
        for(auto x:vec){
            if(head == NULL){
                hhead->val = x;
                hhead->next = NULL;
                head = hhead;
            }
            else{
                ListNode* temp = new ListNode();
                temp->val = x;
                temp->next = NULL;
                hhead->next = temp;
                hhead = hhead->next;
            }
        }
        return head;
    }
};
