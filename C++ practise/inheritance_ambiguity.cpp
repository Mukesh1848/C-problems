
#include <iostream>
using namespace std;

class A {
    
    public:
    
    void func(){
        cout<<"inside A function...";
    }
};


class B {
    
    public:
    
    void func(){
        cout<<"inside B function...";
    }
};

class c: public A , public B {
    
    public:
    
    
};

int main() {
  
  c obj;
  
  obj.A::func();
  cout<<endl;
  obj.B::func();
  
    return 0;
}