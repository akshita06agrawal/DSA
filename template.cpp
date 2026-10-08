// Find maximum element in the array
#include <iostream>
using namespace std;
template<typename T>
T maxElement(T arr[],int size){
    T maxi=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    return maxi;
}
int main()
{
    int arr[]={3,7,2,9,0};
    float arr1[]={3.6,6.8,9.2,5.0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    cout<<maxElement(arr,n)<<endl;
    cout<<maxElement(arr1,n1)<<endl;

    return 0;
}



// Sort the array(Bubble sort)
template<typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}



// Calculate average of the array
template<typename T>
T calculateAverage(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Average of the array: " << calculateAverage(arr, n) << endl;

    return 0;
}