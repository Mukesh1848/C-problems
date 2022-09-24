// programe to remove duplicated element from sorted array 


#include<iostream>
using namespace std;


int remove_duplicate(int a[],int n){
        
        if(n==0 || n==1){
            return n;
        }
        
        int j=0;
        
        for(int i=0; i<n-1;i++){
            
            if(a[i]!=a[i+1]){
                
                a[j]= a[i];
                j++;
            }
            
        }
            a[j] = a[n-1];
            j++;
        
}   


int main(){

        int arr[]={1,2,2,3,3,4,4,4,5};
        int n = sizeof(arr)/sizeof(int);

        int ans = remove_duplicate(arr,n);
        cout<<ans<<" ";
}