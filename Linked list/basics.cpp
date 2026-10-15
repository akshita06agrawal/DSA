#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            next = nullptr;
        }
};
 
int main(){
 
    int a = 5;
    int d(5);
    int* b = new int(6);
    int* c = new int(7);
    int* e = &a;
    cout<<*e<<endl;
 
    cout<<a<<endl;
    cout<<*b<<endl;
    cout<<*c<<endl;
    cout<<d<<endl;
 
 
 
 
    // Node* n1 = new Node(10);
    // cout<<n1->data;
 
    return 0;
}
 
#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            next = nullptr;
        }
};
 
int main(){
 
    Node n1 = 5;
    Node n2(6);
    cout<<n1.data<<endl;
    cout<<n2.data<<endl;
    // int a = 5;
    // int d(5);
    // int* b = new int(6);
    // int* c = new int(7);
    // int* e = &a;
 
    // cout<<*e<<endl;
    // cout<<a<<endl;
    // cout<<*b<<endl;
    // cout<<*c<<endl;
    // cout<<d<<endl;
 
    // Node* n1 = new Node(10);
    // cout<<n1->data;
 
    return 0;
}
 
Node* n3 = new Node(7);
    Node* n4 = new Node(8);
    // int* b = new int(6);
    // int* c = new int(7);
 
Node n1 = 5;
    Node n2(6);
    // int a = 5;
    // int d(5);
 
#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            next = nullptr;
        }
};
 
int main(){
 
    //Allocate memory in stack
    Node n1 = 5;
    Node n2(6);
    // int a = 5;
    // int d(5);
 
    //Allocate memory in heap
    Node* n3 = new Node(7);
    Node* n4 = new Node(8);
    // int* b = new int(6);
    // int* c = new int(7);
 
    cout<<n1.data<<endl;
    cout<<n2.data<<endl;
    cout<<n3->data<<endl;
    cout<<n4->data<<endl;
    // cout<<n3.data<<endl;
 
    n3->next = n4;
    cout<<n3->next->data<<endl;
 
    
 
    return 0;
}
 
#include<bits/stdc++.h>
using namespace std;
 
class Node{
  public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        next = nullptr;
        
    }
};
 
 
int main()
{   
    //Allocate memory in stack
    Node n1 = 5;
    Node n2(6);
   
    
    
    //Create obj like a normal variable and they behave like a variable.
    // int a = 5;
    // int d(5);
    
    //Allocate memory in heap
    Node* n3 = new Node(7);
    Node* n4 = new Node(8);
    Node* n5 = new Node(10);
    
    
    // int *b = new int(6);
    // int *c = new int(7);
    // int *e = &a;
    
    // cout<<a<<endl;
    // cout<<*b<<endl;
    // cout<<c<<endl;
    // cout<<*c<<endl;
    // cout<<d<<endl;
    // cout<<d<<endl;
    
    cout<<n1.data<<endl;
    cout<<n2.data<<endl;
    cout<<n3->data<<endl;
    cout<<n4->data<<endl;
    
    n3->next = n4;
    cout<<n3->next->data<<endl;
    
    cout<<n5->next->data<<endl;
    
    // cout<<n1.next->data<<endl;
    // cout<<n2.next->data<<endl;
    
    
    
    
    // Node* n1 = new Node(10);
    // cout<<n1->data;
    
    
 
    return 0;
}
 





//15. 3Sum
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                int total = nums[i] + nums[j] + nums[k];

                if (total > 0) {
                    k--;
                } else if (total < 0) {
                    j++;
                } else {
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;

                    while (nums[j] == nums[j-1] && j < k) {
                        j++;
                    }
                }
            }
        }
        return res;        
    }
};