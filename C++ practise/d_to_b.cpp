// programe to convert Decimal to Binary 

#include <iostream>
#include<math.h>
using namespace std;
int main() {
    cout<<"Enter a digit"<<endl;
    int n;
    cin>>n;
    
    int i=0;
    int ans=0;
    
    while(n!=0){
       int bit = n&1;
       ans = (bit * pow(10,i)) +ans;
       n= n/2;
       i++;
    }
    cout<<"Ans is "<<ans<<endl;
   
}

