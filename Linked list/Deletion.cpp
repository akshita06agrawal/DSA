//Deletion from the front of the linked list 
#include<bits/stdc++.h>
using namespace std;

class Node{
 public:
 int data;
 Node* next;
 Node(int data){
 this->data = data;
 this->next = nullptr;
 }
};

Node* delete_from_front(Node* head){
 //edge case
 if(head == nullptr){
 return nullptr;
 }
 Node* curr = head;
head = head->next;
 delete curr;
 return head;
}

void print_linked_list(Node* head){
 Node* curr = head;
 while(curr!=nullptr){
 cout<<curr->data;
 cout<<" -> ";
 if(curr->next == nullptr){
 cout<<" -> ";
 }
 curr = curr->next;
 }
 cout<<"NULL";
}

int main(){

 int n;
 cout<<"Enter number of nodes to be insert: ";
 cin>>n;
 int i=1;
 Node* head = nullptr;
 Node* tail = nullptr;
 while(i<=n){
 int a;
 cin>>a;
 Node* newNode = new Node(a);
 if(head == nullptr){
 head = newNode;
 tail = newNode;
 }else{
 tail->next = newNode;
 tail = tail->next;
 }
 i++;
 }

 head = delete_from_front(head);

 print_linked_list(head);

 return 0;
}
