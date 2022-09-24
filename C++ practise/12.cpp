print pattern :- 

9 8 7 
6 5 4 
3 2 1 


#include <iostream>
using namespace std;

int main() {
   
   cout<<"enter a number\n";
   int n;
   cin>>n;
   cout<<n <<endl;
   
   int i=1;
   int value=9;
   while(i<=n){
       int j=1;
       while(j<=n){
           cout<<value<< " ";
           value=value-1;
           j=j+1;
       }
       cout<<endl;
       i=i+1;
   }
   
}