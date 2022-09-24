
#include <iostream>
using namespace std;

class animal {
 
 public:
  int weight;
  int height;
  int age;
  
  void eat(){
      cout<<"eating.....";
  }
};

class dog: public animal{
    public :
    
    void bark(){
        cout<<"barking.....";
    }
};

class cat:public animal {
    
    public:
    
    void wap(){
        cout<<"wapping....";
    }
};

int main() {
   
  cat obj;
  dog obj1;
  
  obj.eat();
  cout<<endl;
  obj.wap();
  cout<<endl;
  cout<<endl;
  obj.eat();
  cout<<endl;
  obj.wap();
  
  
    return 0;
}