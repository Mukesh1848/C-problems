
// programe to view array scope


#include <iostream>
using namespace std;

void printarray(int arr[] , int size){
    arr[0]= 120;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
}
int main() {
   int arr[3]={1,2,3};
   
   for(int i=0;i<3;i++){
       cout<<arr[i]<<endl;
   }
   cout<<"calling function"<<endl;
   printarray(arr,3);
   cout<<"priniting done"<<endl;
   for(int i=0;i<3;i++){
       cout<<arr[i]<<endl;
   }
}