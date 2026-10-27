//Stack using Static Array
// #include<iostream>
// #include<vector>
// #include<stack>
#include<bits/stdc++.h>
using namespace std;

class Stack{
 int arr[5];
 int top;
 public:
 Stack(){
 top = -1;
 }
 void push(int value){
 if(top == 4){
 cout<<"Stack overflow \n";
 return;
 }
 top++;
 // cout<<top<<" ";
 arr[top] = value;
 }
 void pop(){
 if(top == -1){
 cout<<"Stack underflow \n";
 return;
 }
 top--;
 // cout<<top<<" ";
 }
 int peek(){
 if(top == -1){
 cout<<"Stack is empty \n";
 return -1;
 }
 // cout<<top<<" ";
 return arr[top];
 }
 bool isEmpty(){
 return top == -1;
 }
 void display(){
 // cout<<top<<" ";
 for(int i=top; i>=0; i--){
 cout<<arr[i]<<endl;
 }
 }
};

int main(){

 Stack s;
 cout<<s.peek()<<endl;
 s.push(10);
 s.push(20);
 s.push(30);

 s.display();
 cout<<endl;

 s.pop();
 s.display();

 cout<<"Top Element: "<<s.peek();

 return 0;
}



//Stack using dynamic array 
// #include<iostream>
// #include<vector>
// #include<stack>
#include<bits/stdc++.h>
using namespace std;

class DynamicStack{
 int* arr;
 int top;
 int capacity;
 public:
 DynamicStack(){
 capacity = 2;
 arr = new int[capacity];
 top = -1;
 }

 void push(int value){
 if(top == capacity -1){
 int* newArr = new int[capacity*2];
 for(int i=0; i<capacity; i++){
 newArr[i] = arr[i];
 }
 delete[] arr;
 arr = newArr;
 capacity *= 2;
 }
 top++;
 arr[top] = value;
 }
 void pop(){
 if(top == -1){
 cout<<"underflow \n";
 return;
 }
 top--;
 }
 int peek(){
 if(top == -1){
 return -1;
 }
 return arr[top];
 }
 void display(){
 for(int i=top; i>=0; i--){
 cout<<arr[i]<<endl;
 }
 }
 ~DynamicStack(){
 delete[] arr;
 }
};

int main(){

 DynamicStack s;
 s.push(10);
 s.push(20);
 s.push(30);
 s.push(40);

 s.display();

 return 0;
}








//Stack using Linked List 
// #include<iostream>
// #include<vector>
// #include<stack>
#include<bits/stdc++.h>
using namespace std;

class Node{
 public:
 int data;
Node* next;
 Node(int val){
 data = val;
 next = nullptr;
 }
};

class Stack{
Node* top;
 public:
 Stack(){
 top = nullptr;
 }
 void push(int x){
Node* newNode = new Node(x);
 newNode->next = top;
 top = newNode;
 }

 void pop(){
 if(top == nullptr){
 cout<<"Stack underflow \n";
 }
Node* temp = top;
 top = top->next;
 delete temp;
 }
 int peek(){
 if(top == nullptr){
 return -1;
 }
 return top->data;
 }
 bool isEmpty(){
 return top == nullptr;
 }
};

int main(){

Stack st;

 st.push(10);
 st.push(20);
 st.push(30);

 cout<<st.peek()<<endl;
 st.pop();
 cout<<st.peek()<<endl;

 if(st.isEmpty()){
 cout<<"Stack is Empty";
 }else{
 cout<<"Stack is not Empty";
 }

 return 0;
}








//Stack using vector 
// #include<iostream>
// #include<vector>
// #include<stack>
#include <bits/stdc++.h>
using namespace std;

class Stack
{
vector<int> v;

public:
 void push(int value)
 {
 v.push_back(value);
 }

 void pop()
 {
 if (v.empty())
 {
 cout << "Stack underflow \n";
 return;
 }
 v.pop_back();
 }

 int top()
 {
 if (v.empty())
 {
 return -1;
 }
 return v.back();
 }
 bool isEmpty()
 {
 return v.empty();
 }
 int size()
 {
 return v.size();
 }

 void display()
 {
 for (int i = v.size()-1; i >= 0; i--)
 {
 cout << v[i] << " ";
 }
 }
};

int main()
{

Stack st;
 st.push(10);
 st.push(20);
 st.push(30);

 st.display();
 cout << endl;
 cout << "Top Element: " << st.top() << endl;
 cout << endl;
 return 0;
}






//swapping of two stacks
#include<bits/stdc++.h>
using namespace std;

int main(){

stack<int> st;
stack<int> st2;

 st2.push(12);
 st2.push(13);
 st2.push(14);
 st2.push(15);

 st.push(10);
 st.push(20);
 st.push(30);
 st.push(40);
 st.push(50);
 cout<<st.size()<<endl; //5
 cout<<st.top()<<endl; //50
 st.pop(); //remove top element 50
 cout<<st.top()<<endl; //40

 cout<<st.empty()<<endl; //0
 cout<<st.size()<<endl; //4

 cout<<"After swaping st with st2 \n";
 st.swap(st2);
 cout<<st.top()<<endl;

 st.emplace(45);
 cout<<st.top();

 return 0;
}







//monotonic stack by only using elements in stack;
 
#include<bits/stdc++.h>
using namespace std;
 
vector<int> monotonicIncStack(vector<int> &arr, int n){
    stack<int> st; //stores only elements
    for(int i=0; i<n; i++){
        while(!st.empty() && st.top()<arr[i]){
            st.pop();
        }
        st.push(arr[i]);
    }
}
vector<int> monotonicDecStack(vector<int> &arr, int n){
    stack<int> st; //stores only elements
    for(int i=0; i<n; i++){
        while(!st.empty() && st.top()>arr[i]){
            st.pop();
        }
        st.push(arr[i]);
    }
}
 
int main(){
 
    vector<int> arr = {2, 4, 1, 0, 9};
 
    int n = arr.size();
 
    monotonicIncStack(arr, n);
 
    return 0;
}





// this method uses monotonic stack where iteration starts from 0
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {1, 0, 5, 2, 7};

    int n = arr.size();

    stack<int> st;

    vector<int> ans(n, -1);

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && st.top() < arr[i])
        {
            int element = st.top();
            st.pop();
            for (int j = i - 1; j >= 0; j--)
            {
                if (arr[j] == element && ans[j] == -1)
                {
                    ans[j] = arr[i];
                    break;
                }
            }
        }
        st.push(arr[i]);
    }

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}

// bruteforce approach for finding next greater element without monotonic stack.
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {1, 0, 5, 2, 7};

    int n = arr.size();

    vector<int> ans(n, -1);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                ans[i] = arr[j];
                break;
            }
        }
    }

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}

// actual implementation of monotonic stack where iteration starts from end and this is optimal approach which takes less time as compare to the method where iteration starts from beginning.
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {1, 0, 5, 2, 7};

    int n = arr.size();

    stack<int> st;

    vector<int> ans(n, -1);

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= arr[i])
        {
            st.pop();
        }
        if (!st.empty())
        {
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}




// next smaller element
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    vector<int> arr = {1, 0, 5, 2, 7};
 
    int n = arr.size();
 
    stack<int> st;
 
    vector<int> ans(n, -1);
 
    for(int i = n-1; i>=0; i--){
        while(!st.empty() && st.top() >= arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
 
    for(int x: ans){
        cout<<x<<" ";
    }
 
    return 0;
}





// previous smaller element
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    vector<int> arr = {1, 0, 5, 2, 7};
 
    int n = arr.size();
 
    stack<int> st;
 
    vector<int> ans(n, -1);
 
    for(int i = 0; i<n; i++){
        while(!st.empty() && st.top() >= arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
 
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
 
    cout<<endl;
 
    for(int x: ans){
        cout<<x<<" ";
    }
 
    return 0;
}
 




//previous greater element
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    vector<int> arr = {1, 0, 5, 2, 7};
 
    int n = arr.size();
 
    stack<int> st;
 
    vector<int> ans(n, -1);
 
    for(int i = 0; i<n; i++){
        while(!st.empty() && st.top() <= arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
 
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
 
    cout<<endl;
 
    for(int x: ans){
        cout<<x<<" ";
    }
 
    return 0;
}
