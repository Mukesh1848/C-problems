// programe to find Negative Decimal to binary 

#include <iostream>
#include<math.h>
using namespace std;
int main() {
    cout<<"Enter a digit"<<endl;
    long long n;
    cin>>n;
    
    long long i=0;
    long long ans=0;
    if(n<0){
        n= pow(2,16) + n;
    }
    cout<<n<<endl;
    
    while(n){
       int bit = n&1;
       ans = (bit * pow(10,i)) +ans;
       n= n/2;
       i++;
    }
    cout<<"Ans is "<<ans<<endl;
   
}