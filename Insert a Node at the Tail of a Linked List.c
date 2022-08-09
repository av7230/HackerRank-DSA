SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* newnode=malloc(sizeof(SinglyLinkedListNode*));
    newnode->data=data;
        newnode->next=NULL;
        SinglyLinkedListNode* temp;
    if (head==NULL){
        head=newnode;
        return head;
        
        }
    else{
        
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }

return head;
}
