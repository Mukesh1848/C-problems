// write a programe to sort of given an array 

// time complexity -  O(n^2)
// space complexity - O(1)

#include<iostream>
using namespace std;

void sortArray(int arr[] , int n){
    
    for(int i=0;i<n;i++){
        
        for(int j=i+1;j<n;j++){
            
          if(arr[i]>arr[j]){
              swap(arr[i],arr[j]);
             
          }  
        }
    }
    
}

  void printArray(int arr[] , int n){
        
        for(int i=0;i<n;i++){
           cout<<arr[i]<<" ";
        }
    }

int main (){
    
    int arr[7] = {56,5,24,7,90,56,67};
    int n =7;
    
    sortArray(arr,n);
    printArray(arr,n);
}