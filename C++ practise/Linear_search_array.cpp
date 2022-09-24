// programe to find Linear number search in an array 


#include <iostream>
using namespace std;

bool searchArray(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
           return 1; 
        }
       
    }
     return 0;
    
}


int main() {
 
 cout<<"Enter a number to search in an array"<<endl;
 int key;
 cin>>key;
 
 int arr[10]={12,30,-65,56,3,5,7,10,23,78};
 
  bool search =searchArray(arr,10,key);
  
   if(search){
       cout<<"key is present"<<endl;
   }else{
       cout<<"key is absent"<<endl;
   }
}