print pattern : - 



E 
D E 
C D E 
B C D E 
A B C D E



#include <iostream>
using namespace std;

int main() {
   
   cout<<"enter a number\n";
   int n;
   cin>>n;
   cout<<n <<endl;
   
   int i=1;
    while(i<=n){
         char ch ='A'+n-i;
        int j=1;
        while(j<=i){
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
   
}