pritn pattern :-

5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

#include <iostream>
using namespace std;

int main() {
   
   cout<<"enter a number\n";
   int n;
   cin>>n;
  cout<< n <<endl;
   
   int i=1;
   while(i<=n){
       int j=1;
       while(j<=n){
           int v = n-j+1;
           cout<<v << " ";
           j= j+1;
       }
       cout<<endl;
       i=i+1;
   }
   
}