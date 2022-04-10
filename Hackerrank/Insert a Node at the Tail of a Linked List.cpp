SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
	SinglyLinkedListNode* temp = head;
    SinglyLinkedListNode* nn = new SinglyLinkedListNode(data);
    if(head==nullptr){
        head= nn;
        return head;
    }
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next = nn;
    nn->next = nullptr;
    return head;
}
