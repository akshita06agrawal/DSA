#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            data = val;
            left = right = nullptr;
        }
};
 
int main(){
 
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
 
    cout<<root->right->right->data<<endl;
    cout<<root->right->left->data<<endl;
 
    return 0;
}





// Tree Traversals- Preorder,inorder,postorder
#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            data = val;
            left = right = nullptr;
        }
};
 
void preorder(Node* root){
    if(root == nullptr){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root == nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node* root){
    if(root == nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
 
int main(){
 
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
 
    cout<<root->right->right->data<<endl;
    cout<<root->right->left->data<<endl;
 
    cout<<"preOrder \n";
    preorder(root);
 
    cout<<endl;
 
    cout<<"inOrder \n";
    inorder(root);
 
    cout<<endl;
 
    cout<<"portOrder \n";
    postorder(root);
 
    return 0;
}






// Level Order Traversal
#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            data = val;
            left = right = nullptr;
        }
};
 
void preorder(Node* root){
    if(root == nullptr){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root == nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node* root){
    if(root == nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
 
void level_order_traversal(Node* root){
    if(root == nullptr){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left != nullptr){
            q.push(temp->left);
        }
        if(temp->right != nullptr){
            q.push(temp->right);
        }
    }
}
 
int main(){
 
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
 
    cout<<root->right->right->data<<endl;
    cout<<root->right->left->data<<endl;
 
    cout<<"preOrder \n";
    preorder(root);
 
    cout<<endl;
 
    cout<<"inOrder \n";
    inorder(root);
 
    cout<<endl;
 
    cout<<"portOrder \n";
    postorder(root);
 
    cout<<endl;
 
    cout<<"level order traversal \n";
    level_order_traversal(root);
 
    return 0;
}
