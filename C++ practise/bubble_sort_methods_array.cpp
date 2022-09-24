// programe to find sort array using bubble sort methods 


#include <iostream>
using namespace std;

void bubbleSortArray(int arr[] , int n){
    int swapped = false;
    for(int i=1;i<n;i++){
        
        for(int j=0;j<n-i;j++){
           
          if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
              swapped= true;
          }
        }
        
        if(swapped==false){
            break;
        }
    }
}

int main() {
   
   int arr[8]= {5,1,9,15,26,19,0,100};
   
      bubbleSortArray(arr,8);
      for(int i=0;i<8;i++){
         cout<<arr[i]<<" ";
      }
    return 0;
}