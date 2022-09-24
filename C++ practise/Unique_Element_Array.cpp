// programe to find Unique_Element from in an Array 


#include <iostream>
using namespace std;

void printArray(int arr[] , int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int UniqueElement(int arr[],int size){
    
    int ans=0;
    
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    
    int arr[5]= {2,4,2,8,4};
    
     int answer= UniqueElement(arr,5);
     cout<<answer<<" ";
    
   
}