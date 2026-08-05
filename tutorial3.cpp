// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=10;i++){
//         cout<<"Good morning\n";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter your number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<"Hello world\n";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=19;i<=190;i++){ //This method is not very suitable place i+=19 in place of i++
//         if(i%19==0){
//             cout<<i<<endl;
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=100;i>=1;i-=3){
//         cout<<i<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=2;i<=n/2;i++){
//         if(n%i!=0){
//             cout<<"n is a prime number";
//             break;
//         }
//         else{
//             cout<<"n is a composite number";
//         }
//     }
// }

//WAP to count digits of a given number

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter your number:";
//     cin>>n;
//     int count=0;
//     while(n>0){
//         n/=10;
//         count++;
        
//     }
//       cout<<"Total digit is "<<count;
// }

//WAP to print sum of digits of a given number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter your number:";
//     cin>>n;
//     int lastdigit=0;
//     int sum=0;
    
//     while(n>0){
//         lastdigit=n%10;
//         sum+=lastdigit;
//         n/=10;
   
//     }
//     cout<<sum;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter your number:";
//     cin>>n;
//     int remainder=0;
//     int rev=0;
//     while(n!=0){
//         remainder=n%10;
//         rev=rev*10+remainder;
//         n/=10;
//    }
//      cout<<rev;
// }

//Write a program to print alternate series of number 1-2+3-4....n

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter your number:";
//     cin>>n;
//     int sum=0;
// //     for(int i=1;i<=n;i++){
// // if(i%2!=0) sum+=i;
// // else sum-=i;
// //     }
// //     cout<<sum;
// if(n%2==0) sum=-n/2;
// else sum=-n/2+n;
// cout<<sum;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter your number:";
//     cin>>n;
//     int factorial=1;
//     for(int i=1;i<=n;i++){
//         factorial*=i;
//     }
//     cout<<factorial;
// }

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter your number:";
    cin>>n;
    int a=0,b=1;
    // cout<<a<<" "<<b<<" ";
    int sum=0;
    for(int i=2;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<sum;
}

//WAP to find the value of one number raised to the power of another

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter base: ";
    cin>>a;
    cout<<"Enter exponent: ";
    cin>>b;
    int power=1;
    for(int i=1;i<=b;i++){
        power=power*a;
    }
    
}