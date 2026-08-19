// #include<iostream>
// using namespace std;
// int main(){
//     int x=2;
//     int y=8;
//     cout<<&x<<endl;
//     cout<<&y<<endl;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x=2;
//     int* p=&x;
//     int** q=&p;
//     cout<<&x<<endl;
//     cout<<&p<<endl;
//     //  cout<<&q<<endl;

// }

#include<iostream>
using namespace std;
int main(){
    int x=4;
    int* ptr=&x;
    cout<<*ptr<<endl;
    ptr=ptr+1;
    cout<<*ptr<<endl;
}
