print pattern :-

1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1

first method (using extra valriable )

#include <iostream>
using namespace std;

int main() {
   
   cout<<"enter a number\n";
   int n;
   cin>>n;
   cout<<n <<endl;
   
   int i=1;
  int value =1;
  while(i<=n){
      int j =1;
      while(j<=i){
          int v = value+i-j;
          cout<<v<<" ";
          j=j+1;
      }
      cout << endl;
      i=i+1;
  }
   
}


second methods (without using extra methods)


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
          int v =i-j+1;
          cout<<v<<" ";
          j=j+1;
      }
      cout << endl;
      i=i+1;
  }
   
}