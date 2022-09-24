// programe to swap_alternate_element from in an array 


#include <iostream>
using namespace std;

void printArray(int arr[] , int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void swapAlternateArray(int arr[],int size){
    
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    
    int arr[10]= {2,4,6,8,5,4,5,8,6,9};
    
    swapAlternateArray(arr,10);
    
    printArray(arr,10);
}