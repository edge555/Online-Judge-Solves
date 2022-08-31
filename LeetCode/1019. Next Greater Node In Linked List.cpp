class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp=NULL;
        ListNode* ans=NULL;
        ListNode* last=NULL;
        while(head!=NULL){
            if(temp==NULL){
                temp=new ListNode(head->val);
            }
            else{
                temp=new ListNode(head->val);
                temp->next=last;
            }
            last=temp;
            ans=temp;
            head=head->next;
        }
        vector<int>vec;
        stack<int>st;
        int mx=0;
        while(ans!=NULL){
            if(st.empty()){
                st.push(ans->val);
                vec.push_back(0);
            }
            else{
                while(!st.empty()){
                    if(st.top()<=ans->val){
                        st.pop();
                    }
                    else{
                        break;
                    }
                }
                if(st.empty()){
                    vec.push_back(0);
                }
                else{
                    vec.push_back(st.top());
                }
                st.push(ans->val);
            }
            ans=ans->next;
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
};
