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