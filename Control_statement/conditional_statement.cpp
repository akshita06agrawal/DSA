// if-else statement


// Check if a number is positive, negative, or zero
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     if(n > 0){
//         cout << "The number is positive." << endl;
//     }
//     else if(n < 0){
//         cout << "The number is negative." << endl;
//     }
//     else{
//         cout << "The number is zero." << endl;
//     }
//     return 0;

// }



// Leap year
// #include <iostream>
// using namespace std;
// int main(){
//     int year;
//     cout<<"Enter a year: ";
//     cin>>year;
//     if(year%4==0 && year%100!=0 || year%400==0){
//         cout<<year<<" is a leap year."<<endl;
//     }
//     else{
//         cout<<year<<" is not a leap year."<<endl;
//     }
//     return 0;
// }



// Character case
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<ch<<" is an uppercase letter."<<endl;
    }
    else if(ch>=97 && ch<=122){
        cout<<ch<<" is a lowercase letter."<<endl;
    }
    else if(ch>=48 && ch<=57){
        cout<<ch<<" is adigit."<<endl;
    }
    else{
        cout<<ch<<" is a special character."<<endl;
    }

    return 0;
}