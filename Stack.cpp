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


