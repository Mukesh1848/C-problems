//  programe to find nth node from ends of linked list 

int getNthFromLast(Node *head, int n)
{
     Node* temp = head;
     Node* temp1 = head;
     int length=0;
      while(temp!=NULL){
          length++;
         temp= temp->next;
      }
      
      if(length<n){
          return -1;
      }
      
      length = length-n;
      for(int i =0;i<length;i++){
          temp1 = temp1->next;
      }
      return temp1->data; 
}