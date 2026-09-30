// Single inheritance is a type of inheritance in object-oriented programming where a class (derived class) inherits from only one base class. This allows the derived class to access the properties and methods of the base class, promoting code reusability and establishing a hierarchical relationship between classes.
#include<iostream>
using namespace std;
class Base{
    public:
        void display(){
            cout<<"This is the base class"<<endl;
        }
};
class Derived : public Base{
    public:
        void show(){
            cout<<"This is the derived class"<<endl;
        }
};
int main(){
    Derived obj;
    obj.display(); // Accessing base class method
    obj.show();    // Accessing derived class method
    return 0;
}



// Multilevel inheritance is a type of inheritance in object-oriented programming where a class (derived class) inherits from another derived class, creating a chain of inheritance. This allows for the creation of more specialized classes that build upon the functionality of their parent classes, promoting code reusability and establishing a hierarchical relationship between classes.
#include<iostream>
using namespace std;
class Base{
    public:
        void display(){
            cout<<"This is the base class"<<endl;
        }
};
class Derived1 : public Base{               
    public:
        void show1(){
            cout<<"This is the first derived class"<<endl;
        }
};
class Derived2 : public Derived1{
    public:
        void show2(){
            cout<<"This is the second derived class"<<endl;
        }
};
int main(){
    Derived2 obj;
    obj.display(); // Accessing base class method
    obj.show1();   // Accessing first derived class method
    obj.show2();   // Accessing second derived class method
    return 0;
}




// Multiple inheritance is a type of inheritance in object-oriented programming where a class (derived class) inherits from more than one base class. This allows the derived class to combine the properties and methods of multiple base classes, promoting code reusability and enabling the creation of more complex class hierarchies. However, it can also introduce complexities such as the diamond problem, which occurs when two base classes have a common ancestor.
#include<iostream>
using namespace std;
class Base1{
    public:
        void display1(){                
            cout<<"This is the first base class"<<endl;
        }
};
class Base2{
    public:
        void display2(){
            cout<<"This is the second base class"<<endl;
        }
};
class Derived : public Base1, public Base2{
    public:
        void show(){
            cout<<"This is the derived class"<<endl;
        }
};
int main(){
    Derived obj;
    obj.display1(); // Accessing first base class method
    obj.display2(); // Accessing second base class method
    obj.show();     // Accessing derived class method
    return 0;
}



// Hierarchical inheritance is a type of inheritance in object-oriented programming where multiple derived classes inherit from a single base class. This allows the derived classes to share the properties and methods of the base class, promoting code reusability and establishing a hierarchical relationship between classes. Each derived class can also have its own unique properties and methods, allowing for specialization while still maintaining a connection to the base class.
#include<iostream>
using namespace std;
class Base{
    public:
        void display(){   
            cout<<"This is the base class"<<endl;
        }
};
class Derived1 : public Base{
    public:
        void show1(){
            cout<<"This is the first derived class"<<endl; 
        }
};
class Derived2 : public Base{
    public:
        void show2(){   
            cout<<"This is the second derived class"<<endl;
        }
};
int main(){
    Derived1 obj1;
    obj1.display(); // Accessing base class method
    obj1.show1();   // Accessing first derived class method

    Derived2 obj2;
    obj2.display(); // Accessing base class method
    obj2.show2();   // Accessing second derived class method

    return 0;
}



// hybrid inheritance is a type of inheritance in object-oriented programming that combines multiple inheritance and hierarchical inheritance. In hybrid inheritance, a class can inherit from multiple base classes, and those base classes can also have their own derived classes. This allows for the creation of complex class hierarchies that combine the features of both multiple and hierarchical inheritance, promoting code reusability and enabling the creation of more specialized classes.
#include<iostream>
using namespace std;
class Base{
    public:
        void display(){
            cout<<"This is the base class"<<endl;
        }
};
class Derived1 : public Base{
    public:
        void show1(){
            cout<<"This is the first derived class"<<endl;
        }
};
class Derived2 : public Base{
    public:
        void show2(){
            cout<<"This is the second derived class"<<endl;
        }
};
class Derived3 : public Derived1, public Derived2{
    public:
        void show3(){
            cout<<"This is the third derived class"<<endl;
        }
};
int main(){
    Derived3 obj;
    obj.display(); // Accessing base class method
    obj.show1();   // Accessing first derived class method
    obj.show2();   // Accessing second derived class method
    obj.show3();   // Accessing third derived class method
    return 0;
}   





//Ambuiguity
#include<iostream>
using namespace std;
 
class A{
    public:
        void display(){
            cout<<"class A"<<endl;
        }
};
 
class B{
    public:
        void display(){
            cout<<"class B"<<endl;
        }
};
 
class C: public A, public B{
    public:
        void view(){
            // A::display();
            // B::display();
        }
};
 
int main(){
 
    C c;
    //both display function will call at the same time so this will create an ambiguity
 
    //So to resolve this issue we use scope resolution operator (::)
 
    c.A::display();
    c.B::display();
    // c.view();
    return 0;
}