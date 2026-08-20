// 1. Find the address of a variable
//Task: Use the address-of operator to print the address of a variable.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num=10;
//     cout<<(&num);
//     return 0;
// }


// 2. Pointer initialization with address-of operator
// Task: Initialize a pointer with the address of a variable and print the value it points to.
#include <iostream>
using namespace std;
int main(){
    int a=10;
    int *p=&a;
    cout<<*p<<endl;
    return 0;
}



// 3. Print the address of a variable and its value
// Task: Print both the address and value of a variable using a pointer.
#include <iostream>
using namespace std;
int main(){
    int a=10;
    int *p=&a;
    cout<<"Address: "<<p<<endl;
    cout<<"Value: "<<*p<<endl;
    return 0;
}



// 4. Change the value of a variable using a pointer
// Task: Modify the value of a variable using a pointer.
#include <iostream>
using namespace std;
int main(){
    int a=10;
    int *p=&a;
    *p=20; 
    cout<<"Value: "<<a<<endl; 
    return 0;
}



// 5. Basic Pointer Increment :
// Task: Declare an integer variable x and a pointer ptr pointing to x. Increment the pointer and print the values of ptr and x. What is the result?
#include <iostream>
using namespace std;
int main(){
    int x=10;
    int *ptr=&x;
    ptr++; 
    cout<<"Value of ptr: "<<ptr<<endl;
    cout<<"Value of x: "<<x<<endl;
    return 0;
}


// swap two numbers without third variable using pointer
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b;
    cin>>b;
    int *ptr1=&a;
    int *ptr2=&b;
    a=*ptr1+*ptr2;
    b=*ptr1-*ptr2;
    a=*ptr1-*ptr2;
    cout<<a<<" ";
    cout<<b;

    return 0;
}

// swap two numbers using third variable using pointer
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int *ptr1=&a;
    int *ptr2=&b;
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    cout<<*ptr1<<" ";
    cout<<*ptr2;

    return 0;
}


