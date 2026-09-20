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



// Sum of Digits of a Number
#include<bits/stdc++.h>
using namespace std;
int sumOfDigits(int n){
    if(n==0){
        return 0;
    }
   
    return n%10+sumOfDigits(n/10);
}
int main(){
    int n;
    cout<<"Enter a no:";
    cin>>n;
    // int sum=0;
    cout<<"Sum of digits of "<<n<<" is: "<<sumOfDigits(n);
}



// Bubble sort using recursion
// Sum of Digits of a Number
#include<bits/stdc++.h>
using namespace std;
int Bubble_sort(int *arr, int n){
    if(n==1){
        return arr[n];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    return Bubble_sort(arr,n-1);
}
int main(){
    int n;
    cout<<"Enter Size of Array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before sorting:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Bubble_sort(arr,n);
    cout<<"After sorting:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}



// Quick Sort
// Quick sort
#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void Quick_sort(int arr[], int low, int high){
    if(low<high){
    int pi=partition(arr,low,high);
    Quick_sort(arr,low,pi-1);
    Quick_sort(arr,pi+1,high);   
    }
}
int main(){
    int n;
    cout<<"Enter Size of Array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before sorting:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Quick_sort(arr,0,n-1);
    cout<<"After sorting:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}



// N-queens problem for 4*4 board
#include <iostream>
using namespace std;
#define N 4
void printBoard(int board[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(board[i][j]==1){
                cout<<"Q";
            }
            else{
                cout<<".";
            }
        }
        cout<<endl;
    }
}
bool isSafe(int board[N][N], int row,int col){
    int i,j;
    // check col
    for(i=0;i<row;i++){
        if(board[i][col]==1){
            return false;
        }
    }
    
    // check left diagonal
    for(i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(board[i][j]==1){
            return false;
        }
    }
    
    // check right diagonal
    for(i=row-1,j=col+1;i>=0 && j<N;i--,j++){
        if(board[i][j]==1){
            return false;
        }
    }
    return true;
}
bool solveQueen(int board[N][N], int row){
    // if we reach the last element that means we have found the solution so return true 
    if(row==N){
        return true;
    }
    for(int col=0;col<N;col++){
        if(isSafe(board,row,col)){
            board[row][col]=1;
            if(solveQueen(board,row+1)){
                return true;
            }
            // backtracking
            board[row][col]=0;
        }
    }
    return false;
}
int main()
{
    int board[N][N]={0};
    // 0->row
    if(solveQueen(board,0)){
        printBoard(board);
    }
    else{
        cout<<"No solution exist";
    }
    return 0;
}



// 20. Valid parentheses
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char ch : s) {
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            } else {
                if (st.empty()) {
                    return false;
                }
                char top = st.top();
                st.pop();
                if (ch == ')' && top != '(') return false;
                if (ch == ']' && top != '[') return false;
                if (ch == '}' && top != '{') return false;
            }
        }
        return st.empty();
    }
};