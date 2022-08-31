class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list1;
        for(int i=0;i<a-1;i++){
            temp=temp->next;
        }
        ListNode* temp2=temp;
        for(int i=0;i<=b-a+1;i++){
            temp2=temp2->next;
        }
        temp->next=list2;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=temp2;
        return list1;
    }
};
