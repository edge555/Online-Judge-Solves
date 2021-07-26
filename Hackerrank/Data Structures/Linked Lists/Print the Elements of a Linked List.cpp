void printLinkedList(SinglyLinkedListNode* head) {
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}
