// programe to find nCr of given numbers

#include <iostream>
#include<math.h>
using namespace std;

int fact(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}

int nCr(int n , int r){
    int numonator = fact(n);
    int denominator = fact(r) * fact(n-r);
    
    return numonator/denominator;
}

int main() {
    cout<<"Enter value of n "<<endl;
    int n;
    cin>> n;
    cout<<"enter value of r";
    int r;
    cin>>r;
//   int answer= nCr(n,r);
  cout<<"Answer is "<<nCr(n,r);
}