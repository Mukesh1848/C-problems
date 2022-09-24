print pattern :-

1 2 3 
4 5 6 
7 8 9 



#include <iostream>
using namespace std;

int main() {
   
   cout<<"enter a number\n";
   int n;
   cin>>n;
   cout<<n <<endl;
   
   int i=1;
   int value=1;
   while(i<=n){
       int j=1;
       while(j<=n){
           cout<<value<< " ";
           value=value+1;
           j=j+1;
       }
       cout<<endl;
       i=i+1;
   }
   
}