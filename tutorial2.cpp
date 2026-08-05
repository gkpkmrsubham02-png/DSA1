// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter your number: ";
//     cin>>n;
//     if(n%2==0){
//         cout<<"Number is even";
//     }
//     else{
//         cout<<"Number is odd";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter your number: ";
//     cin>>n;
//     if(n%5==0){
//         cout<<"divisible by 5";
//     }
//     else{
//         cout<<"not divisible by 5";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int cp,sp;
//     cout<<"Enter your cost price: ";
//     cin>>cp;
//     cout<<"Enter your selling price: ";
//     cin>>sp;
//     if(sp>cp){
//         cout<<"Seller has made profit";
//     }
//     else{
//         cout<<"seller has incurred loss";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"Enter your character:";
//     cin>>ch;
//     int ascii=(int)ch;
//     if((ascii>=97 && ascii<=122) || (ascii>=97 && ascii<=122)){
//         if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
//             cout<<"character is vowel";
//         }
//         else {
//             cout<<"character is consonant";
//         }
//     }
//     else {
//         cout<<"character is not an alphabet";
//     }
//    return 0;

// }

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter your number: ";
    cin>>x;
    switch(x){
        case 1:
        cout<<"Monday";
        break;

        case 2:
        cout<<"Tuesday";
        break;

        case 3:
        cout<<"Wednesday";
        break;

        case 4:
        cout<<"Thursday";
        break;

        case 5:
        cout<<"Friday";
        break;

        case 6:
        cout<<"Saturday";
        break;
      default:
      cout<<"Invalid number";
        
    }
}

