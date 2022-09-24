print pattern :- 

A B C D 
E F G H 
I J K L 
M N O P 


#include <iostream>
using namespace std;

int main() {
   
   cout<<"enter a number\n";
   int n;
   cin>>n;
   cout<<n <<endl;
   
   int i=1;
     char ch = 'A';
  while(i<=n){
      int j=1;
      while(j<=n){
          cout<<ch<<" ";
          ch = ch+1;
          j=j+1;
      }
      cout<<endl;
      i=i+1;
  }
   
}