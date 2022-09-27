
Node* reverseDLL(Node * head)
{
    
    if(head->prev==NULL && head->next==NULL){
        return head;
    }
    Node* temp = NULL;
    Node* current = head;
 
    /* swap next and prev for all nodes of
    doubly linked list */
    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
 
    /* Before changing the head, check for the cases like
       empty list and list with only one node */
    if (temp != NULL)
        head = temp->prev;

}
