// programe to find factorial number of any given number using recursion methods 



#include <iostream>
using namespace std;

int fact(int n){
    
    if(n==0){
        return 1;
    }
    
    int ans = n * fact(n-1);
    return ans;
}
int main() {
    
    int n;
    cin>>n;
    
    int ans = fact(n);
    cout<<ans;
}