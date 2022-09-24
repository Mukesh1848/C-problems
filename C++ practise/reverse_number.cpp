// programe to print reverse Number

#include <iostream>
#include<math.h>
using namespace std;
int main() {
    cout<<"Enter a Number to find reverse interger"<<endl;
    int n;
    cin>>n;
    int rem;
    int sum=0;
    while(n!=0){
        rem = n%10;
        sum = sum * 10 + rem;
        n=n/10;
    }
 