// programe to find power of given numbers


#include <iostream>
#include<math.h>
using namespace std;

int power(int n, int r){
    int sum =1;
    for(int i=1;i<=r;i++){
        sum= sum*n;
    }
    return sum;
}

int main() {
    cout<<"Enter value of n "<<endl;
    int n;
    cin>> n;
    cout<<"enter value of r ";
    int r;
    cin>>r;

  cout<<"power of "<<power(n,r)<<endl;
}