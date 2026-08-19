// #include<iostream>
// using namespace std;
// void starTriangle(int x){
//     for(int i=1;i<=x;i++){
//          for(int j=1;j<=i;j++){
//             cout<<"*";
//          }
//          cout<<endl;
//     }
// }
// int main(){
// starTriangle(3);
// starTriangle(4) ;
// starTriangle(5) ;
// }

// #include<iostream>
// using namespace std;
// int fact(int x ){
//     int fact=1;
//     for(int i=2;i<=x;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int combination(int n,int r){
//     int ncr=fact(n)/(fact(r)*fact(n-r));
// return ncr;
// }
// int permutation(int n,int r){
//     int npr=fact(n)/fact(n-r);
// return npr;
// }

// int main(){
//     // int x,y;
//     // cin>>x>>y;
//     // cout<<min(x,y);
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int r;
//     cout<<"Enter r: ";
//     cin>>r;
//     int ncr=combination(n,r);
//     cout<<ncr<<endl;
//     int npr=permutation(n,r);
//     cout<<npr;
// }

//factorial of a givem no.
#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
fact*=i;
  }
return fact;
}
// for(int i=2;i<=n;i++){
// fact*=i;
// }
int main(){
int n;
cout<<"Enter a umber";
cin>>n;
cout<<fact<<endl;

}