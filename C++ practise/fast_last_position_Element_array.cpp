// programe to find Fast and Last Occurence of element i=from in an Array 


#include<iostream>
using namespace std;

int fastOccurence(int arr[], int n, int key){
    
    int s= 0;
    int e= n;
    int ans =-1;
    
    while(s<=e){
        int mid = s +(e-s)/2;
        
        if(arr[mid]==key){
            ans = mid;
            e=mid-1;
        }else if(arr[mid]>key){
            e= mid-1;
        }else{
            s= mid+1;
        }
        mid = s+ (e-s)/2;
}
return ans;
}

int lastOccurence(int arr[], int n, int key){
    
    int s= 0;
    int e= n;
    int ans =-1;
    
    while(s<=e){
        int mid = s +(e-s)/2;
        
        if(arr[mid]==key){
            ans = mid;
            s=mid+1;
        }else if(arr[mid]>key){
            e= mid-1;
        }else{
            s= mid+1;
        }
        mid = s+ (e-s)/2;
}
return ans;
}

int main(){
    int arr[7]={1,2,5,3,3,3,5};

  int fast=fastOccurence(arr,7,3);
  int last=lastOccurence(arr,7,3);
  cout<<"the fast occurence 3 in Index " <<fast<<endl;
  cout<<"the last occurence 3 in index " <<last;
    
}