print pattern :- 

A B C D 
A B C D 
A B C D 
A B C D 


#include <iostream>
using namespace std;

int main() {
   
   cout<<"enter a number\n";
   int n;
   cin>>n;
   cout<<n <<endl;
   
   int i=1;
  while(i<=n){
      int j=1;
      while(j<=n){
          char ch = 'A'+j-1;
          cout<<ch<<" ";
          j=j+1;
      }
      cout<<endl;
      i=i+1;
  }
   
}