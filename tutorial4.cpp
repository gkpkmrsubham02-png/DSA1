// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"Enter no. of rows:";
//     cin>>n;
//     cout<<"Enter no.of columns:";
//     cin>>m;
//     for(int i=1;i<=n;i++){
//          for(int i=1;i<=m;i++){
//             cout<<" * ";
//          }
//          cout<<endl;
//     }
// }
// Number square
// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//     cout<<"Enter no. of rows:";
//     cin>>n;
//     // cout<<"Enter no.of columns:";
//     // cin>>m;
//     for(int i=1;i<=n;i++){
//          for(int j=1;j<=n;j++){
//             cout<<j;
//          }
//          cout<<endl;
//     }
// }

// Star Triangle

// #include<iostream>
// using namespace std;
// int main(){
//      int n;
//     cout<<"Enter no. of rows:";
//     cin>>n;
//     // cout<<"Enter no.of columns:";
//     // cin>>m;
//     for(int i=1;i<=n;i++){
//          for(int j=1;j<=i;j++){
//             cout<<"*";
//          }
//          cout<<endl;
//     }
// }

//Star Triangle reverse

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows:";
//     cin>>n;
//     // cout<<"Enter no.of columns:";
//     // cin>>m;
//     for(int i=1;i<=n;i++){
//          for(int j=1;j<=n+1-i;j++){
//             cout<<"*";
//          }
//          cout<<endl;
//     }
// }

//Number triangle
// #include<iostream> 
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows:";
//     cin>>n;
//     // cout<<"Enter no.of columns:";
//     // cin>>m;
//     for(int i=1;i<=n;i++){
//          for(int j=1;j<=i;j++){ //same for reverse also but place n+1-i instead of i
//             cout<<j;
//          }
//          cout<<endl;
//     }
// }

// odd number triangle
// #include<iostream> 
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows:";
//     cin>>n;
//     // cout<<"Enter no.of columns:";
//     // cin>>m;
//     for(int i=1;i<=n;i++){
//          for(int j=1;j<=2*i-1;j+2){ 
//             cout<<j;
//          }
//          cout<<endl;
//     }
// }

//alphabet square triangle

// #include<iostream> 
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows:";
//     cin>>n;
//     // cout<<"Enter no.of columns:";
//     // cin>>m;
//     for(int i=1;i<=n;i++){
//          for(int j=1;j<=n;j++){ 
//             cout<<(char)(j+64)<<" ";
//          }
//          cout<<endl;
//     }
// }

//Star Plus
// #include<iostream> 
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows:";
//     cin>>n;
//     // cout<<"Enter no.of columns:";
//     // cin>>m;
//     int mid=n/2+1;
//     for(int i=1;i<=n;i++){
//          for(int j=1;j<=n;j++){ 
//             if(i==mid || j==mid){
//                 cout<<"*";
//             }
//             else cout<<" ";
        
//          }
//          cout<<endl;
//     }
// }

// #include<iostream> 
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows:";
//     cin>>n;
//     // cout<<"Enter no.of columns:";
//     // cin>>m;
    
//     for(int i=1;i<=n;i++){
//          for(int j=1;j<=n;j++){ 
//             if(i==j || i+j==n+1){
//                 cout<<"*";
//             }
//             else cout<<" ";
        
//          }
//          cout<<endl;
//     }
// }
// FLOYD TRIANGLE
// #include<iostream> 
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows:";
//     cin>>n;
//     // cout<<"Enter no.of columns:";
//     // cin>>m;
//     int k=1;
//     for(int i=1;i<=n;i++){
//          for(int j=1;j<=i;j++){ //same for reverse also but place n+1-i instead of i
//             cout<<k<<" ";
//             k++;
//          }
//          cout<<endl;
//     }
// }

//Binary Triangle
// #include<iostream> 
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows:";
//     cin>>n;
//     // cout<<"Enter no.of columns:";
//     // cin>>m;
//     int a=5;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             a=1; //row no. odd
//         }
//         else a=0;
//          for(int j=1;j<=i;j++){ //same for reverse also but place n+1-i instead of i
//             cout<<a;
//          //flipping
//          if (a==1) a=0;
//          else a=1;
//          }
//          cout<<endl;
//     }
// }

// #include<iostream> 
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows:";
//     cin>>n;
//     // cout<<"Enter no.of columns:";
//     // cin>>m;
//     int a=5;
//     for(int i=1;i<=n;i++){
//         // if(i%2!=0){
//         //     a=1; //row no. odd
//         // }
//         // else a=0;
//          for(int j=1;j<=i;j++){ //same for reverse also but place n+1-i instead of i
            
         
//          if ((i+j)%2==0) cout<<1;
//          else cout<<0;
//          }
//          cout<<endl;
//     }
// }

//Star triangle flipped 

// #include<iostream> 
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows:";
//     cin>>n;
//     // cout<<"Enter no.of columns:";
//     // cin>>m;
//     // int a=5;
//     for(int i=1;i<=n;i++){
//         // if(i%2!=0){
//         //     a=1; //row no. odd
//         // }
//         // else a=0;
//          for(int j=1;j<=n-i;j++){ //same for reverse also but place n+1-i instead of i
//             cout<<" ";
         
//         //  if ((i+j)%2==0) cout<<1;
//         //  else cout<<0;
//         // for(int k=1;k<=i;k++){
//         //    cout<<"*";
//         }
//         for(int k=1;k<=i;k++){
//            cout<<"*";
//          }
//          cout<<endl;
//     }
// }

//Number triangle flipped

#include<iostream> 
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows:";
    cin>>n;
    // cout<<"Enter no.of columns:";
    // cin>>m;
    // int a=5;
    for(int i=1;i<=n;i++){
        // if(i%2!=0){
        //     a=1; //row no. odd
        // }
        // else a=0;
         for(int j=1;j<=n-i;j++){ //same for reverse also but place n+1-i instead of i
            cout<<" ";
         
        //  if ((i+j)%2==0) cout<<1;
        //  else cout<<0;
        // for(int k=1;k<=i;k++){
        //    cout<<"*";
        }
        for(int k=1;k<=i;k++){
           cout<<k;
         }
         cout<<endl;
    }
}

