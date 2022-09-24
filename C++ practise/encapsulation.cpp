#include <iostream>
using namespace std;

class student{
    
    private:
    
    string studentname;
    int studentrollno;
    int studentage;
    
    public:
    
    string getstudentname(){
        return studentname;
    }
    
    void setstudentname(string studentname){
        this -> studentname = studentname;
    }
    
    int getstudentrolllno(){
        return studentrollno;
    }
    
    void setstudentrollno(int studentrollno){
        this -> studentrollno = studentrollno;
    }
    
     int getstudentage(){
        return studentage;
    }
    
    void setstudentage(int studentage){
        this -> studentage = studentage;
    }
};

int main() {
   
   student s1;
   
   s1.setstudentname("mukesh kumar");
   s1.setstudentage(123);
   s1.setstudentrollno(6557);
   
   
   cout<<"student name "<<s1.getstudentname()<<endl;
   cout<<"student age "<<s1.getstudentage()<<endl;
   cout<<"student rollno "<<s1.getstudentrolllno()<<endl;
    return 0;
}