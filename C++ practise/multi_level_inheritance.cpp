
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

class babydog: public dog{
    
    public:
    
    void wap(){
        cout<<"wapping....";
    }
};

int main() {
   
  babydog obj;
  
  obj.bark();
  cout<<endl;
  obj.eat();
  cout<<endl;
  obj.wap();
  
    return 0;
}