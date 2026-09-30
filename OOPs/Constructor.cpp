// Constructors in C++ are special member functions that are automatically called when an object of a class is created. They have the same name as the class and do not have a return type. Constructors can be used to initialize objects and allocate resources.

// Destructors, on the other hand, are special member functions that are automatically called when an object goes out of scope or is explicitly deleted. They have the same name as the class preceded by a tilde (~) and do not have a return type. Destructors are used to release resources and perform cleanup tasks.
#include<iostream>
using namespace std;
 class A{
    public:
        A(){
            cout<<"A is constructor"<<endl;
        }
        ~A(){
            cout<<"A is destructor"<<endl;
        }
};
 class B: public A{
    public:
        B(){
            cout<<"B is constructor"<<endl;
        }
        ~B(){
            cout<<"B is destructor"<<endl;
        }
};
class C: public B{
    public:
        C(){
            cout<<"C is constructor"<<endl;
        }
        ~C(){
            cout<<"C is destructor"<<endl;
        }
};
 int main(){
 
    C obj;
 
    return 0;
}