// program to find largest element in an array 


#include<iostream>
using namespace std;

int largest(int arr[], int n)
    {
        
        int max = arr[0];
        
        for(int i=1;i<n;i++){
            
            if(arr[i]>max){
                max= arr[i];
            }
            

        }
          return max;
    }



int main(){
        int arr[] = {1,3,37,12,45,3};

        int n = sizeof(arr)/sizeof(int);
             
          int ans=largest(arr,n);
          cout<<ans;
}
