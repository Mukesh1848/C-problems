
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

int main() {
   
  dog obj;
  
  obj.bark();
  cout<<endl;
  obj.eat();
  
    return 0;
}