//call by value


#include <iostream>
using namespace std;
void square(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    square(n);

    return 0;
}


// call by reference
#include<iostream>
using namespace std;
void square(int &n){
        n=98;
        cout<<n<<endl;
}
int main()
{
    int n=5;
    square(n);
    cout<<n;

    return 0;
}


// call by address
#include<iostream>
using namespace std;
void square(int *p,int *q){
        *p=54;
        *q=90;
        cout<<*p<<" "<<*q<<endl;
}
int main()
{
    int a=5;
    int b=7;
    
    square(&a,&b);
    cout<<a<<" "<<b<<endl;

    return 0;
}


// check vowel or consonant(call by value)
#include<iostream>
using namespace std;
void alphabet(char a){
    if(a == 'a' || a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
        cout<<"vowel";
    }
    else{
        cout<<"consonant";
    }
}
int main()
{
    char a;
    cout<<"Enter character:";
    cin>>a;
    alphabet(a);

    return 0;
}


// check vowel or consonant(call by reference)
#include<iostream>
using namespace std;
void alphabet(char &a){
    if(a == 'a' || a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
        cout<<"vowel";
    }
    else{
        cout<<"consonant";
    }
}
int main()
{
    char a;
    cout<<"Enter character:";
    cin>>a;
    alphabet(a);

    return 0;
}

// check vowel or consonant(call by address)
#include<iostream>
using namespace std;
void alphabet(char *a){
    if(*a == 'a' || *a=='e'||*a=='i'||*a=='o'||*a=='u'||*a=='A'||*a=='E'||*a=='I'||*a=='O'||*a=='U'){
        cout<<"vowel";
    }
    else{
        cout<<"consonant";
    }
}
int main()
{
    char a;
    cout<<"Enter character:";
    cin>>a;
    alphabet(&a);

    return 0;
}


// check number is positive/negative/zero(call by value)
#include<iostream>
using namespace std;
void check(int n){
    if(n>0){
        cout<<"positive";
    }
    else if(n<0){
        cout<<"negative";
    }
    else{
        cout<<"zero";
    }
}
int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    check(n);

    return 0;
}


// check number is positive/negative/zero(call by reference)
#include<iostream>
using namespace std;
void check(int &n){
    if(n>0){
        cout<<"positive";
    }
    else if(n<0){
        cout<<"negative";
    }
    else{
        cout<<"zero";
    }
}   
int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    check(n);

    return 0;
}

// check number is positive/negative/zero(call by address)
#include<iostream>
using namespace std;
void number(int *n){
    if(*n >0){
        cout<<"Positive";
    }
    else if(*n<0){
        cout<<"Negative";
    }
    else{
        cout<<"Zero";
    }
}
int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    number(&n);

    return 0;
}