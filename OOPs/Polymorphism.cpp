// Runtime polymorphism
//Function overriding is a feature in object-oriented programming that allows a derived class to provide a specific implementation of a function that is already defined in its base class. In C++, function overriding is achieved by defining a function in the derived class with the same name, return type, and parameters as the function in the base class.

#include<bits/stdc++.h>
using namespace std;
class Employee{
    public:
        void work(){
            cout<<"Base class called \n";
        }
};
class Developer: public Employee{
    public:
       void work(){
            cout<<"Derived class called \n";
       }
};
int main(){
    Developer dev;
    dev.work();
    return 0;
}




// Virtual function Definition: A virtual function is a member function in a base class that you expect to override in derived classes. When you use a virtual function, you tell the compiler to support late binding on this function. The most common use of virtual functions is to achieve runtime polymorphism.
// With Virtual function: o/p of this code is "Derived class"
#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
        virtual void speak(){
            cout<<"Base class";
        }
};
class Dog: public Animal{
    public:
        void speak(){
            cout<<"Derived class";
        }
};
int main(){
    Animal *a = new Dog();
    a->speak();

    delete a;
    return 0;
}



// without virtual function: o/p of this code is "Base class"
#include<iostream>
using namespace std;
class Animal{
     public:

        void speak(){

            cout<<"Base class";

        }

};
class Dog: public Animal{
    public:
        void speak(){
            cout<<"Derived class";

        }
};
int main(){
    Animal *a = new Dog();
    a->speak();
    delete a;
    return 0;

}