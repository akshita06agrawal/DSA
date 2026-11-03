#include<iostream>
using namespace std;
class Queue{
    int arr[100];
    int front;
    int rear;
    int size;
    public:
    Queue(){
        front=-1;
        rear=-1;
    }
    void enqueue(int x){
        if(rear==100){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        if(front==-1){
            front=0;
        }
        arr[++rear]=x;
    }
    void dequeue(){
        if(front==-1 || front>rear){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        cout<<"dequeue: "<<arr[front]<<endl;
        front++;
    }
    void display(){
        if(front==-1 || front>rear){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"Queue elements: ";
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}






// Dynamic Queue Implementation
#include<bits/stdc++.h>
using namespace std;
 
class DynamicQueue{
    int *arr;
    int front, rear, size;
    public:
        DynamicQueue(int n){
            size = n;
            arr = new int[size];
            front = -1;
            rear = -1;
        }
        void enqueue(int x){
            if(rear == size-1){
                cout<<"Queue overflow \n";
                return;
            }
            if(front == -1){
                front = 0;
            }
            rear++;
            arr[rear] = x;
        }
        void dequeue(){
            if(front == -1 || front > rear){
                cout<<"Queue Underflow \n";
                return;
            }
            cout<<"Deleted: "<<arr[front]<<endl;
            front++;
        }
        void display(){
            if(front == -1 || front > rear){
                cout<<"Queue Empty \n";
                return;
            }
            for(int i=front; i<=rear; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        ~DynamicQueue(){
            delete[] arr;
        }
};
 
int main(){
 
    DynamicQueue q(10);
 
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
 
    q.display();
 
    q.dequeue();
 
    q.display();
 
    return 0;
}
 




// Linked List Implementation of Queue
#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
        int data;
        Node* next;
 
        Node(int val){
            data = val;
            next = NULL;
        }
};
 
class Queue{
    Node *front, *rear;
    public:
        Queue(){
            front = rear = NULL;
        }
        void enqueue(int x){
            Node* temp = new Node(x);
 
            if(rear == NULL){
                front = rear = temp;
                return;
            }
            rear->next = temp;
            rear = temp;
        }
        void dequeue(){
            if(front == NULL){
                cout<<"Queue Empty \n";
                return;
            }
            Node* temp = front;
            cout<<"Deleted "<<front->data<<endl;
            front = front->next;
            if(front==NULL){
                rear = nullptr;
            }
            delete temp;
        }
        void display(){
            if(front == NULL){
                cout<<"Queue Empty \n";
                return;
            }
            Node* temp = front;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
};
 
int main(){
 
    Queue q;
 
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
 
    q.display();
    q.dequeue();
    q.display();
 
    return 0;
}





// Queue using two stacks
#include<bits/stdc++.h>
using namespace std;
 
class Queue{
    stack<int> s1, s2;
    public:
        void enqueue(int x){
            s1.push(x);
        }
        void dequeue(){
            if(s1.empty() && s2.empty()){
                return;
            }
            if(s2.empty()){
                while(!s1.empty()){
                    s2.push((s1.top()));
                    s1.pop();
                }
            }
            cout<<"Deleted: "<<s2.top()<<endl;
            s2.pop();
        }
 
        void display(){
            stack<int> temp1 = s1;
            stack<int> temp2 = s2;
            while(!temp2.empty()){
                cout<<temp2.top()<<" ";
                temp2.pop();
            }
            int arr[100];
            int i = 0;
            while(!temp1.empty()){
                arr[i++] = temp1.top();
                temp1.pop();
            }
            for(int j=i-1; j>=0; j--){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
};
 
int main(){
 
    Queue q;
 
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
 
    q.display();
    q.dequeue();
    q.display();
 
    return 0;
}





//queue using vector
#include<bits/stdc++.h>
using namespace std;
 
class Queue{
    vector<int> v;
    int front, rear;
    public:
        Queue(){
            front = -1;
            rear = -1;
        }
        void enqueue(int x){
            if(rear == -1){
                front = 0;
            }
            rear++;
            v.push_back(x);
        }
        void dequeue(){
            if(front == -1){
                cout<<"Queue Empty \n";
                return;
            }
            cout<<"Deleted "<<v[front]<<endl;
            front++;
            if(front > rear){
                front = -1;
                rear = -1;
            }
        }
        void display(){
            if(front == -1){
                cout<<"Queue Empty \n";
                return;
            }
            for(int i=front; i<=rear; i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
};
 
int main(){
 
    Queue q;
 
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
 
    q.display();
    q.dequeue();
    q.display();
 
    return 0;
}





/ circular queue implementation
#include<bits/stdc++.h>
using namespace std;
 
class CircularQueue{
 
    vector<int> arr;
    int front;
    int rear;
    int capacity;
    int count;
 
    public:
        CircularQueue(int size){
            capacity = size;
            arr.resize(capacity);
            front = 0;
            rear = -1;
            count = 0;
        }
        bool isEmpty(){
            return count == 0;
        }
        bool isFull(){
            return count == capacity;
        }
 
        bool enqueue(int value){
            if(isFull()){
                cout<<"Queue overflow"<<endl;
                return false;
            }
            rear = (rear+1)%capacity;
            arr[rear] = value;
            count++;
            return true;
        }
        bool dequeue(){
            if(isEmpty()){
                cout<<"Queue Underflow"<<endl;
                return false;
            }
            front = (front+1)%capacity;
            count--;
            return true;
        }
        int getFront(){
            if(isEmpty()){
                return -1;
            }
            return arr[front];
        }
        int getRear(){
            if(isEmpty()){
                return -1;
            }
            return arr[rear];
        }
        int size(){
            return count;
        }
       
};
 
int main(){
 
    CircularQueue q(5);
 
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
 
    cout<<q.getFront()<<endl;
 
    q.dequeue();
    q.dequeue();
 
    q.enqueue(60);
    q.enqueue(70);
 
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;
 
    return 0;
}
