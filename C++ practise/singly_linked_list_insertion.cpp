// programe to insertion of singly linked list 
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    
    public:
    int data;
    Node* next;
    
    // constructor 
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next= head;
    head= temp;
    
}

void insertTail(Node* &tail , int data){
    Node* current = new Node(data);
    tail->next= current;
    tail=current;
}

void insertAtPosition(Node* tail , Node* head, int position , int data){
         
        //  insert at start 
         if(position==1){
             insertHead(head,data);
             return;
         }
         
        
         
         Node* temp = head;
         int count =1;
         
          // insert at end
        if(temp->next==NULL){
            insertTail(tail,data);
            return;
        }
         
         while(count < position-1) {
        temp = temp->next;
        count++;
    }
    
    // creating a node for data
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next= temp->next;
    temp-> next= nodeToInsert;
        
        
        
}

// print the linked list(traversal of linked list)
void printList(Node* &head){
    
    if(head==NULL){
        cout<<" linked List are empty...";
        return;
    }
    
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main() {

  Node* node1 = new Node(15);
//   cout<<node1->data<<endl;
//   cout<<node1->next;

   Node* head = node1;
  Node* tail = node1;
   
    printList(head);
    insertHead(head,5); // insert 10 in first of linked list 
    printList(head);
   insertTail(tail,35); // insert 20 at last of linked list
   printList(head);
  insertAtPosition(tail,head,1,125);

   printList(head);

    return 0;
}