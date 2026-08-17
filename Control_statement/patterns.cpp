// ****
// ***
// **
// *
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){   //rows
        for(int j=1;j<=n-(i-1);j++){  //star(columns)
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}



// ****
//  ***
//   **
//    *

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i-1;j>0;j--){
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}


//     *    
//    ***
//   *****
//  *******
// *********
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){   //space
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){   //star
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}




// *********
//  *******
//   *****
//    ***
//     *
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i-1;j>0;j--){   //space
            cout<<" ";
        }
        for(int j=2*n-1;j>=2*i-1;j--){  //star
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}



//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){   //space
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){   //star
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>0;i--){
        for(int j=n-i;j>0;j--){   //space
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){   //star
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}


// hollow pyramid
    //     *
    //    * *
    //   *   *
    //  *     * 
    // *********       
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){   //space
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){  //star
         if(j==1 || j==2*i-1 || i==n){
            cout<<"*";
         }
         else{
             cout<<" ";
         }
        }
        cout<<endl;
    }
    return 0;
}




// hollow square
// *****
// *   *
// *   *
// *   *
// *****
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){  //star
         if(i==1 || j==1 || j==n || i==n){
            cout<<"*";
         }
         else{
             cout<<" ";
         }
        }
        cout<<endl;
    }
    return 0;
}

// hollow triangle
// *
// **
// * *
// *  *
// *****
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   for(int i=1;i<=n;i++){
        // for(int j=n-i;j>0;j--){   //space
        //     cout<<" ";
        // }
        for(int j=1;j<=i;j++){  //star
         if(j==1 || j==i || i==n){
            cout<<"*";
         }
         else{
             cout<<" ";
         }
        }
        cout<<endl;
    }
    return 0;
}


// butterfly
// *        *
// **      **
// ***    ***
// ****  **** 
// **********
// ****  ****
// ***    ***
// **      **
// *        *
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){  //star
            cout<<"*";
        
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){  //star
            cout<<"*";
        
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}



// 1
// 12
// 123
// 1234
// 12345
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){  
            cout<<j;
        
        }
        cout<<endl;
    }
    
    return 0;
}


// 1
// 21
// 321
// 4321
// 54321
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   for(int i=1;i<=n;i++){
       int a=i;
        for(int j=1;j<=i;j++){  
            cout<<a;
            a--;
        }
        cout<<endl;
    }
    
    return 0;
}



// 12345
// 1234
// 123
// 12
// 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   for(int i=1;i<=n;i++){
        for(int j=1;j<=n-(i-1);j++){  
            cout<<j;
        }
        cout<<endl;
    }
    
    return 0;
}


// 1
// 23
// 456
// 78910
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
   for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){  
            cout<<a;
            a++;
        }
        cout<<endl;
    }
    
    return 0;
}

//square of numbers
// 11111
// 22222
// 33333
// 44444
// 55555
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
          for(int j=1;j<=n;j++){  
                cout<<i;
          }
          cout<<endl;
     }

    return 0;
}


// Pascal's triangle
//     1
//    1 1
//   1 2 1
//  1 3 3 1        
// 1 4 6 4 1
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   for(int i=0;i<n;i++){
       int value=1;
       for(int j=0;j<n-i;j++){
           cout<<" ";
       }
       for(int j=0;j<=i;j++){
           cout<<value<<" ";
           value=value*(i-j)/(j+1);
           
       }
       cout<<endl;
   }

    return 0;
}