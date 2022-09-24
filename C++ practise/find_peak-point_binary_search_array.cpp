// programe to find peak point of binary search array 

#include<iostream>
using namespace std;


int findPeak(int arr[], int n) {

    int s =0, e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {
        //cout<<" s " << s <<" e " << e << endl;
        if(arr[mid] < arr[mid+1]){
            s = mid+1; 
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}


int main() { 

    int even[8] = {10,20,30,40,35,25,15,5};
    
    int result = findPeak(even,8);
    cout<<result;
    

    return 0;
}