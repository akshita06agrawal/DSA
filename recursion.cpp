// print no from N to 1 using recursion
#include<bits/stdc++.h>
using namespace std;
void printNumber(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printNumber(n-1);
}
int main(){
    int n;
    cout<<"Enter a no:";
    cin>>n;
    printNumber(n);
    return 0;
}

// print no from 1 to N using recursion
#include<bits/stdc++.h>
using namespace std;
void printNumber(int n){
    if(n==0){
        return;
    }
    printNumber(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter a no:";
    cin>>n;
    printNumber(n);
    return 0;
}


// Add using recursion
#include<bits/stdc++.h>
using namespace std;
int add(int n){
    if(n==0){
        return 0;
    }
    return n+add(n-1);
}
int main(){
    int n;
    cout<<"Enter a no:";
    cin>>n;
    cout<<add(n);
    return 0;
}


// factorial using recursion
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"Enter a no:";
    cin>>n;
    cout<<fact(n);
    return 0;
}


// Fibonacci series using recursion
#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cout<<"Enter a no:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<fibo(i)<<" ";
    }
    return 0;
}