print pattern :- 

1 
2 3 
3 4 5 
4 5 6 7 
5 6 7 8 9 

code method first (using extra variable ) -------------------------------

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
      int j =1;
      while(j<=i){
          int v = i+value+j-2;
          cout<<v<< " ";
          j=j+1;
      }
      cout <<endl;
      i=i+1;
  }
   
}


code methods second (without using extra methods) ------------------------------


#include <iostream>
using namespace std;

int main() {
   
   cout<<"enter a number\n";
   int n;
   cin>>n;
   cout<<n <<endl;
   
   int i=1;
  
  while(i<=n){
      int j =1;
      while(j<=i){
          int v = i+j-1;
          cout<<v<< " ";
          j=j+1;
      }
      cout <<endl;
      i=i+1;
  }
   
}