DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
struct DoublyLinkedListNode *pre,*temp,*nxt;
pre=NULL;
temp=llist;
while(llist!=NULL){
    
   nxt=temp->next;
   temp->next=pre;
   temp->prev=nxt;
    if(nxt==NULL)
    break;
    
        pre=temp;
        temp=nxt;
    }
    temp->prev=NULL;
    return temp;
}
