// All about doubly linkde list 


/// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    
    // constructor 
    Node(int d){
        this->data=d;
        this->next;
    }
    // destructor 
    ~Node(){
        int value = this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
    cout<<"memory free for node with data "<<value<<endl;
    }
};
// insertion of doubly linked list in head position 
void insertAtHead(Node* &tail,Node* &head , int data){
    if(head==NULL){
        Node* temp = new Node(data);
        head=temp;
        tail= temp;
    }
    else{
    Node* temp = new Node(data);
    temp->next=head;
    head->prev=temp;
    head= temp;
    }
}
// insertion of doubly linked list in tail position 
void insertAtTail(Node* &tail ,Node* &head, int data){
       if(tail==NULL){
         Node* temp = new Node(data);
         tail= temp;
         head= temp;
       }
       else{
          Node* temp = new Node(data);
       tail->next=temp;
       temp->prev= tail;
       tail = temp;
      }
}

// insert any position in doubly likned list in any position 
void insertAtPosition(Node* &tail , Node* &head, int position , int data){
  // insert at first position 
    if(position==1){
        insertAtHead(tail,head,data);
        return;
    }
    Node* temp = head;
    int count =0;
    while(count<position-1){
        temp= temp->next;
        count++;
    }
    
    // insert at tail position 
     if(temp->next==NULL){
         insertAtTail(tail,head,data);
         return;
     }
     
    // creating a node for data
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev= nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev= temp;
    
    
}
// traversing in a doubly likend list 
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp =temp->next;
    }
    cout<<endl;
}

// getting length of doubly linked list 
 int getLength(Node* &head){
     Node* temp = head;
     int len=0;
     if(temp==NULL){
         return 0;
     }
     while(temp!=NULL){
         len++;
         temp= temp->next;
     }
     return len;
 }

void deleteNode(int position,Node* &head){
    
    if(position==1){
        Node* temp = head;
        temp->next->prev=NULL;
        head=temp->next;
         temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt=1;
        
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr-> prev==NULL;
        prev->next = curr->next;
        curr-> next==NULL;
        delete curr;
    }
}
int main() {
    
    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    
    // print(head);
    // cout<<getLength(head);
    
    insertAtHead(tail,head,5);
    print(head);
    
    insertAtHead(tail,head,1);
    print(head);
    insertAtTail(tail,head,15);
    print(head);
     insertAtTail(tail,head,20);
    print(head);
    insertAtPosition(tail, head,2,100);
    print(head);
    insertAtPosition(tail, head,1,1000);
    print(head);
    insertAtPosition(tail, head,6,10000);
    print(head);
    deleteNode(1,head);
    print(head);
    deleteNode(6,head);
    print(head);
    
    return 0;
}