SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    
SinglyLinkedList* llist=malloc(sizeof(SinglyLinkedListNode*));
llist->head=NULL;
llist->tail=NULL;
while(head1 != NULL && head2 != NULL){
        if(head1->data > head2->data){
            insert_node_into_singly_linked_list(&llist, head2->data);
            head2 = head2->next;
        }
        else if(head1->data < head2->data){
            insert_node_into_singly_linked_list(&llist, head1->data);
            head1 = head1->next;
        }
        else{
            insert_node_into_singly_linked_list(&llist, head1->data);
            insert_node_into_singly_linked_list(&llist, head2->data);
            head1 = head1->next;
            head2 = head2->next;
        }
    }
    
    while(head1 != NULL){
        insert_node_into_singly_linked_list(&llist, head1->data);
        head1 = head1->next;
    }
    while(head2 != NULL){
        insert_node_into_singly_linked_list(&llist, head2->data);
        head2 = head2->next;
    }
    
    return llist->head;

    

}
