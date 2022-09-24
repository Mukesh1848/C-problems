// programe to find 2 power of any given number using recusion 



#include <iostream>
using namespace std;

int power(int n){
    
    if(n==0){
        return 1;
    }
    
    int ans = 2 * power(n-1);
    return ans;
}
int main() {
    
    int n;
    cin>>n;
    
    int ans = power(n);
    cout<<ans;
}