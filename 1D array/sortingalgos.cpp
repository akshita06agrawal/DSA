// Bubble Sort
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"After sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}



// Insertion sort
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout<<"After sorting:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}



// Selection sort
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
            //swap
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
        
    }
    cout<<"After sorting:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}