// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int arr[n];
//      //  input
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//    int x;
//     cout<<"Enter the number you want to search: ";
//     cin>>x;
// // checkmark
// bool flag = false;
//     for(int i=0;i<=n-1;i++){
//     if(arr[i]==x)
//       flag=true;
//     }
//     if(flag==true) cout<<"element found";
//     else cout<<"404 element not found";

// }

// maximum value out of all the elements in the array
// #include<iostream>
// using namespace std;
// int main(){
//      int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int arr[n];
//      //  input
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int max=arr[0];
//      for(int i=0;i<=n-1;i++) {
//         if(max<arr[i]) max=arr[i];
//      }
//      cout<<max;
// }
//Find the second largest element in the array
#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter the number: ";
    cin>>n;
    int arr[n];
     //  input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max=arr[0];
     for(int i=0;i<=n-1;i++) {
        if(max<arr[i]) max=arr[i];
     }

      int smax=arr[0];
     for(int i=0;i<=n-1;i++) {
        if( arr[i]!=max && smax<arr[i]) smax=arr[i];
     }
     cout<<max<<endl;
     cout<<smax<<endl;

}
