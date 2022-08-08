void reversePrint(SinglyLinkedListNode* llist) {
SinglyLinkedListNode* temp=llist,*n,*p=NULL;
while(temp!=NULL){
    n=temp->next;
    temp->next=p;
    p=temp;
    temp=n;   
}

llist=p;
SinglyLinkedListNode* temp2=llist;
while(temp2!=NULL){
     printf("%d\n",temp2->data);
        temp2=temp2->next;
}
}
