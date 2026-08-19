// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,4,6,7,8};
//     int* ptr=&arr[0];
//     cout<<ptr<<endl;
//     ptr[0]=8;
//     for(int i=0;i<=4;i++){
//         cout<<ptr[i]<<" "; 
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,6,7,8};
    int* ptr=&arr[0];
    // cout<<ptr<<endl;
    // ptr[0]=8;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" "; 
        ptr++;
    }
}