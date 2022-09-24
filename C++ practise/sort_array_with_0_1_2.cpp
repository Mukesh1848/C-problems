
// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.



#include<iostream>
using namespace std;


void sort012(int a[], int n)
    {
        
        int l=0;
        int m=0;
        int h=n-1;
       
        
        for(int i=0;i<n;i++){
            
            while(m<=h){
                
                if(a[m]==0){
                    swap(a[l],a[m]);
                    l++;
                    m++;
                } else if(a[m]==1){
                    m++;
                }else{
                    swap(a[m],a[h]);
                    h--;
                }
            }
            
        }
    }

void printarray(int arr[], int n){

        for(int i =1;i<n;i++){
                cout<<arr[i]<<" ";
        }
}


    int main(){

        int arr[] = {1,0,0,2,0,0,1,2,0,1};

        int n = sizeof(arr)/sizeof(int);
        sort012(arr,n);
        printarray(arr,n);
    }