SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
SinglyLinkedListNode* prev;
SinglyLinkedListNode* nex;
prev=llist;
nex=llist->next;

while(nex!=NULL){
    if(nex->data==prev->data){
        prev->next=nex->next;
        free(nex);
        nex=prev->next;
    }
    else{
    nex=nex->next;
    prev=prev->next;}
}
return llist;
}
