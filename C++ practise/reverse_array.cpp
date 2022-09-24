// programe to find reverse element from an array 



#include <iostream>
using namespace std;

void reverseArray(int arr[] ,int n){
    
    int start = 0;
    int end = n-1;
    
     while(start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    
    int arr[5]= {2,4,6,8,5};
    reverseArray(arr,5);
}