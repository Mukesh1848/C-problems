// programe to rotate array of an given index 


#include <iostream>
using namespace std;

void rotateArray(int arr[] , int n , int d){
    int temp[n];
    int k=0;
    
    for(int i=d;i<n;i++){
        temp[k] = arr[i];
        k++;
    }
    
    for(int i=0;i<d;i++){
        temp[k] = arr[i];
        k++;
    }
    
    for(int i=0;i<n;i++){
        arr[i]= temp[i];
       
        
    }
}

void printArray(int arr[] , int n){
         for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  }

int main(){
    
   int arr[7] = {2,5,8,17,48,23,11}; 

 rotateArray(arr,7 , 2);
 
 printArray(arr,7);
    return 0;
}