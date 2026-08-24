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


//6. swap two numbers without third variable using pointer
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

//7. swap two numbers using third variable using pointer
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




// 8. Pointer Arithmetic with Simple Variables :
// Declare two integer variables a and b. Declare a pointer that points to a. Use pointer arithmetic to set the value of b to be the sum of a and b using ptr.
#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin>>a>>b;
    int *ptr=&a;
    b=*ptr+b;
    cout<<b;

    return 0;
}


// 9.  Pointer Subtraction :
// Create two integer variables, x and y. Declare two pointers, ptr1 and ptr2, pointing to x and y respectively. Use pointer arithmetic to calculate the difference between the two pointers.
#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cin>>x>>y;
    int *ptr1=&x;
    int *ptr2=&y;
    int diff=*ptr1-*ptr2;
    cout<<diff;

    return 0;
}


// 10.  Pointer Decrement :
// Declare an integer variable x and a pointer ptr pointing to it. Perform a decrement on the pointer and then print the pointer's value and the variable's value.
#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int *ptr=&x;
    cout<<"Pointer's value wihout decrement:"<<ptr<<endl;
    ptr--;
    cout<<"Variable's value:"<<x<<endl;
    cout<<"Pointer's value after decrement:"<<ptr;

    return 0;
}



// 11. Pointer Arithmetic with Multiple Variables :
// Create three integer variables a, b, and c. Declare a pointer ptr and use pointer arithmetic to set it first to point to a, then to b, and finally to c. Print the values pointed to by the pointer.
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int *ptr=&a;
    int *ptr1=&b;
    int *ptr2=&c;
    cout<<*ptr<<" "<<*ptr1<<" "<<*ptr2;
    cout<<*ptr+*ptr1;   //we can't do direct arithmetic operation on ptr i.e ptr+ptr1
    return 0;
}



// // 12. Pointer Arithmetic with Characters :
// // Declare a character variable ch and a pointer ptr pointing to it. Increment the pointer by 1 and print the address and value of ch.
#include <iostream>
using namespace std;
int main()
{
    char ch='A';
    char *ptr=&ch;
    cout<<*ptr<<endl;
    *ptr++;
    cout<<*ptr<<endl;
    cout<<ptr;
    return 0;
}



// 13.  Manipulating Pointer Value : 
// Declare a pointer ptr that points to an integer variable num. Set num to 10, then use pointer arithmetic to change num to 20 by incrementing the pointer and modifying the value it points to.
#include <iostream>
using namespace std;
int main()
{
    int num=10;
    int *ptr=&num;
    *ptr+=10;
    cout<<"Num:"<<num<<endl;
    cout<<"Value pointed by ptr:"<<*ptr;
    return 0;
}



// 14.  Pointer Comparison :
// Declare two integer variables a and b. Create pointers ptr1 and ptr2 pointing to these variables. Compare the two pointers and print whether they are equal or not.
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int *ptr1=&a;
    int *ptr2=&b;
    if(*ptr1==*ptr2){
        cout<<"Equal";
    }
    else{
        cout<<"Not Equal";
    }
    return 0;
}


// 15. Add and subtract using pointer arithmetic : 
// Write a program to demonstrate addition and subtraction on pointers.
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int *ptr1=&a;
    int *ptr2=&b;
    int add=*ptr1+*ptr2;
    cout<<add<<endl;
    int sub=*ptr1-*ptr2;
    cout<<sub;
    return 0;
}


// 1.  Basic Pointer to Pointer :
 
// Declare an integer variable x, a pointer ptr1 pointing to x, and a pointer ptr2 pointing to ptr1. Modify the value of x using ptr2 and print the result
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter value:";
    cin>>x;
    int *ptr1=&x;
    int **ptr2=&ptr1;
    int y;
    cout<<"Enter modify value:";
    cin>>y;
    cout<<"Old value of x:"<<**ptr2<<endl;
    **ptr2=y;
    cout<<"Modified value of x:"<<x;
    return 0;
}


// 2. Pointer to Pointer to Pointer :
// Declare an integer variable a, a pointer ptr1 pointing to a, a pointer-to-pointer ptr2 pointing to ptr1, and a pointer-to-pointer-to-pointer ptr3 pointing to ptr2. Use ptr3 to modify the value of a and print the value of a.
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter value:";
    cin>>a;
    int *ptr1=&a;
    int **ptr2=&ptr1;
    int ***ptr3=&ptr2;
    int y;
    cout<<"Enter modify value:";
    cin>>y;
    cout<<"Old value of a:"<<***ptr3<<endl;
    ***ptr3=y;
    cout<<"Modified value of a:"<<a;
    return 0;
}



// 3. What is new and delete operator? Explain with Example.
//Definition: The new operator is used to allocate memory dynamically.
// The delete operator is used to free the dynamically allocated memory.
#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;

    *ptr = 10;

    cout << "Value: " << *ptr << endl;

    delete ptr;

    return 0;
}


//4. Memory Leak, NULL and nullptr with Example.
//Definition:
//1. Memory Leak: A memory leak occurs when dynamically allocated memory is not released using delete.
//Example:
#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;

    *ptr = 10;

    cout << *ptr << endl;

    // delete ptr;  // If we don't use delete, memory leak occurs

    return 0;
}


//2.NULL: NULL is traditionally used to indicate that a pointer does not point to a valid object.
//Example:
int *ptr = NULL;

if (ptr == NULL)
{
    cout << "Pointer is NULL";
}

// 3. nullptr: nullptr was introduced in C++11 and represents a null pointer.
// Example:
#include <iostream>
using namespace std;
int main()
{
    int *ptr = nullptr;

    if (ptr == nullptr)
    {
        cout << "Pointer is null";
    }

    return 0;
}


// 5. Pass by Value :
// Definition: In pass by value, a copy of the argument's value is passed to the function. Any changes made to the parameter inside the function do not affect the original variable.
// Explain With Example.
#include <iostream>
using namespace std;
void changeValue(int x)
{
    x = 20;
    cout << "Value inside function: " << x << endl;
}
int main()
{
    int a = 10;

    cout << "Before function call: " << a << endl;

    changeValue(a);

    cout << "After function call: " << a << endl;
    return 0;
}

// Output
// Before function call: 10
// Value inside function: 20
// After function call: 10




// 6. Pass by Reference :
// Definition: In pass by reference, a reference to the original variable is passed to the function. Any changes made to the parameter inside the function will directly affect the original variable.
// Explain With Example.
Example
#include <iostream>
using namespace std;
void changeValue(int &x)
{
    x = 20;
    cout << "Value inside function: " << x << endl;
}
int main()
{
    int a = 10;

    cout << "Before function call: " << a << endl;

    changeValue(a);

    cout << "After function call: " << a << endl;

    return 0;
}
// Output
// Before function call: 10
// Value inside function: 20
// After function call: 20




// 7. Pass by Address (Using Pointer) : 
// Definition: In pass by address, the address (or pointer) of the variable is passed to the function. The function can use this pointer to modify the original value of the variable. This approach allows functions to modify the original variable even though the function parameter is not a reference.
// Explain With Example.
Example
#include <iostream>
using namespace std;
void changeValue(int *x)
{
    *x = 20;
    cout << "Value inside function: " << *x << endl;
}
int main()
{
    int a = 10;

    cout << "Before function call: " << a << endl;

    changeValue(&a);

    cout << "After function call: " << a << endl;

    return 0;
}
// Output
// Before function call: 10
// Value inside function: 20
// After function call: 20




// 10. Compare Pass by Value, Reference, and Address :
// Task: Compare the behavior of pass by value, reference, and address with a simple modification of an integer. Show how each method changes or doesn’t change the original value.
// Input: int a = 5, b = 10;
// Output: "Pass by Value: a = 5, b = 10", "Pass by Reference: a = 15, b = 10", "Pass by Address: a = 25, b = 10"
#include <iostream>
using namespace std;
// Pass by Value
void passByValue(int a)
{
    a = 15;
}
// Pass by Reference
void passByReference(int &a)
{
    a = 15;
}
// Pass by Address
void passByAddress(int *a)
{
    *a = 25;
}
int main()
{
    int a = 5;
    int b = 10;

    // Pass by Value
    passByValue(a);
    cout << "Pass by Value: a = " << a << ", b = " << b << endl;

    // Pass by Reference
    passByReference(a);
    cout << "Pass by Reference: a = " << a << ", b = " << b << endl;

    // Pass by Address
    passByAddress(&a);
    cout << "Pass by Address: a = " << a << ", b = " << b << endl;

    return 0;
}
```

// Output
// Pass by Value: a = 5, b = 10
// Pass by Reference: a = 15, b = 10
// Pass by Address: a = 25, b = 10

// ### Why?

// **1. Pass by Value**
// void passByValue(int a)
// A copy of `a` is passed → original `a` remains **5**.


// **2. Pass by Reference**
// void passByReference(int &a)
// The function works directly with original `a` → `a` becomes **15**.


// **3. Pass by Address**
// void passByAddress(int *a)
// Address of `a` is passed → `*a = 25` changes the original `a` to **25**.


// Value     → Copy       → Original unchanged
// Reference → Same       → Original changed
// Address   → Pointer    → Original changed


