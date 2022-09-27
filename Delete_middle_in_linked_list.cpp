
// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    if(head==NULL){
        return NULL;
    }
    
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;
    
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }
    
    prev->next = slow->next;
   delete slow;
   return head;
    
}
