// hash collision techniques
// 1. Chaining
#include <iostream>
#include <list>
using namespace std;
 
class HashTable {
 
    int size;
 
    // Array of linked lists
    list<int>* table;
 
public:
 
    HashTable(int s) {
        size = s;
        table = new list<int>[size];
    }
 
    // Hash function
    int hashFunction(int key) {
        return key % size;
    }
 
    // Insert operation
    void insert(int key) {
 
        int index = hashFunction(key);
 
        table[index].push_back(key);
 
        cout << key << " inserted at index " << index << endl;
    }
 
    // Search operation
    bool search(int key) {
 
        int index = hashFunction(key);
 
        for (int x : table[index]) {
 
            if (x == key) {
                return true;
            }
        }
 
        return false;
    }
 
    // Display hash table
    void display() {
 
        for (int i = 0; i < size; i++) {
 
            cout << i << " -> ";
 
            for (int x : table[i]) {
                cout << x << " -> ";
            }
 
            cout << "NULL" << endl;
        }
    }
 
    ~HashTable() {
        delete[] table;
    }
};
 
int main() {
 
    HashTable ht(5);
 
    // Insert elements
    ht.insert(10);
    ht.insert(15);
    ht.insert(20);
    ht.insert(25);
    ht.insert(12);
 
    cout << "\nHash Table:\n";
 
    ht.display();
 
    // Search
    cout << "\nSearching 20: ";
 
    if (ht.search(20)) {
        cout << "Found";
    }
    else {
        cout << "Not Found";
    }
 
    return 0;
}






// 2.Linear Probing
#include <bits/stdc++.h>
using namespace std;
 
class HashTable {
 
    int size;
    int* table;
 
public:
 
    HashTable(int s) {
        size = s;
 
        table = new int[size];
 
        for(int i = 0; i < size; i++) {
            table[i] = -1;
        }
    }
 
    // Hash Function
    int hashFunction(int key) {
        return key % size;
    }
 
    // Insert
    void insert(int key) {
 
        int index = hashFunction(key);
 
        int start = index;
 
        // Linear Probing
        while(table[index] != -1) {
 
            index = (index + 1) % size;
 
            // Table is full
            if(index == start) {
                cout << "Hash Table is Full!" << endl;
                return;
            }
        }
 
        table[index] = key;
 
        cout << key << " inserted at index " << index << endl;
    }
 
    // Search
    bool search(int key) {
 
        int index = hashFunction(key);
 
        int start = index;
 
        while(table[index] != -1) {
 
            if(table[index] == key) {
                return true;
            }
 
            index = (index + 1) % size;
 
            if(index == start) {
                break;
            }
        }
 
        return false;
    }
 
    // Display
    void display() {
 
        for(int i = 0; i < size; i++) {
 
            cout << i << " -> ";
 
            if(table[i] == -1)
                cout << "EMPTY";
            else
                cout << table[i];
 
            cout << endl;
        }
    }
 
    ~HashTable() {
        delete[] table;
    }
};
 
int main() {
 
    HashTable ht(7);
 
    ht.insert(10);
    ht.insert(20);
    ht.insert(15);
    ht.insert(7);
    ht.insert(17);
 
    cout << "\nHash Table:\n";
 
    ht.display();
 
    cout << "\nSearching 17: ";
 
    if(ht.search(17))
        cout << "Found";
    else
        cout << "Not Found";
 
    return 0;
}
 



// 3. Quadratic Probing
#include <bits/stdc++.h>
using namespace std;
 
class HashTable {
 
    int size;
    int* table;
 
public:
 
    HashTable(int s) {
 
        size = s;
 
        table = new int[size];
 
        for(int i = 0; i < size; i++) {
            table[i] = -1;
        }
    }
 
    // Hash Function
    int hashFunction(int key) {
        return key % size;
    }
 
    // Insert
    void insert(int key) {
 
        int index = hashFunction(key);
 
        for(int i = 0; i < size; i++) {
 
            int newIndex = (index + i * i) % size;
 
            if(table[newIndex] == -1) {
 
                table[newIndex] = key;
 
                cout << key << " inserted at index "
                     << newIndex << endl;
 
                return;
            }
        }
 
        cout << "Cannot insert " << key << endl;
    }
 
    // Search
    bool search(int key) {
 
        int index = hashFunction(key);
 
        for(int i = 0; i < size; i++) {
 
            int newIndex = (index + i * i) % size;
 
            if(table[newIndex] == -1) {
                return false;
            }
 
            if(table[newIndex] == key) {
                return true;
            }
        }
 
        return false;
    }
 
    // Display
    void display() {
 
        for(int i = 0; i < size; i++) {
 
            cout << i << " -> ";
 
            if(table[i] == -1)
                cout << "EMPTY";
            else
                cout << table[i];
 
            cout << endl;
        }
    }
 
    ~HashTable() {
        delete[] table;
    }
};
 
int main() {
 
    HashTable ht(7);
 
    ht.insert(10);
    ht.insert(17);
    ht.insert(24);
    ht.insert(31);
 
    cout << "\nHash Table:\n";
 
    ht.display();
 
    cout << "\nSearching 24: ";
 
    if(ht.search(24))
        cout << "Found";
    else
        cout << "Not Found";
 
    return 0;
}
 
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int arr[] = {10, 20, 10, 30, 20, 10};
 
    int hash[100] = {0};
 
    int n = 6;
 
    //store frequency
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }
    //print frequency
    cout<<"10 = "<<hash[10]<<endl;
    cout<<"20 = "<<hash[20]<<endl;
    cout<<"30 = "<<hash[30]<<endl;
 
    return 0;
}
 
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int arr[] = {10, 20, 10, 30, 20, 10};
 
    unordered_map<int, int> mp;
 
    for(int i=0; i<6; i++){
        mp[arr[i]]++;
    }
 
    for(auto it: mp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
    return 0;
}
 
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int arr[] = {10, 20, 10, 30, 20, 10};
 
    unordered_map<int, int> mp;
 
    for(int i=0; i<6; i++){
        mp[arr[i]]++;
    }
 
    for(auto it: mp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
 
    cout<<mp[60]<<endl;
    return 0;
}
