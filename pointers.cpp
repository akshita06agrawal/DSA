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
