class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int>vec;
        while(head!=NULL){
            vec.push_back(head->val);
            head=head->next;
        }
        int num=0,cur=1;
        for(int i=vec.size()-1;i>=0;i--){
            if(vec[i]==1){
                num+=cur;
            }
            cur*=2;
        }
        return num;
    }
};
