// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     // arr[0]=7;
//     // arr[0]=6;
//     // arr[0]=5;
//     // arr[0]=4;
//     // arr[0]=3;
//     // arr[0]=2;
//     // arr[0]=1;
//     cout<<arr[4];
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7];
//     //input
//     for(int i=0;i<=6;i++){
//         cin>>arr[i];
//     }
//     //output
//      for(int i=0;i<=6;i++){
//         cout<<arr[i]<<" ";
// }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of students: ";
    cin>>n;
    int marks[n];
    //  input
    for(int i=0;i<=n-1;i++){
        cin>>marks[i];
    }
//output
for(int i=0;i<=n-1;i++){
    if(marks[i]<35){
  cout<<i<<" ";
    }
  }
}