// programe to find Selection Sort Array from in an array 


#include <iostream>
using namespace std;

void sortOfArray(int arr[] , int n){
    
    for(int i=0;i<n-1;i++){
        int minIndex =i;
        
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
            swap(arr[minIndex],arr[i]);
        }
    }
}

int main() {
   
   int arr[7]= {5,1,9,15,26,19,0};
   
      sortOfArray(arr,7);
      for(int i=0;i<7;i++){
         cout<<arr[i]<<" ";
      }
    return 0;
}