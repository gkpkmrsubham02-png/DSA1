// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no.of rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=n;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//Star pyramid 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no.of rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=2*i-1;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//star diamond
 


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no.of rows: ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    int m=n-1;
    int nsp=1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m+1-i;j++){
            cout<<"*";
        }
        
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp+=2;
        //stars

        cout<<endl;
        for(int j=1;j<=m+1-i;j++){
            cout<<"*";
    }
}
  cout<<endl;
}