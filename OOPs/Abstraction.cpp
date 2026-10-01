//Abstract class is a class that cannot be instantiated and is designed to be inherited by other classes. It serves as a blueprint for derived classes, providing a common interface and defining certain behaviors that must be implemented by the derived classes. In C++, an abstract class is created by declaring at least one pure virtual function, which is a virtual function that has no implementation in the base class and must be overridden in the derived class.
#include<bits/stdc++.h>
using namespace std;
class Shape{
    public:
    virtual void draw() = 0; // pure virtual function
};
class Circle: public Shape{
    public:
        void draw(){
            cout<<"Drawing Circle\n";
        }
};
class square: public Shape{
    public:
        void draw(){
            cout<<"Drawing Square\n";
        }
};
int main(){
    Shape *s1 = new Circle();
    Shape *s2 = new square();
    s1->draw();
    s2->draw();

    delete s1;
    delete s2;
    return 0;
}