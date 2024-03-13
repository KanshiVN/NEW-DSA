#include<bits/stdc++.h>
using namespace std;
int main(){

    // int a,b;
    // cin>>a;
    // cin>>b;
    // int c=a|b;
    // cout<<c<<" or "<<endl;
    // c=a&b;
    // cout<<c<<" and "<<endl;
    // c=a^b;
    // cout<<c<<" xor "<<endl;
    // cin>>b;
    // c=~b;
    // cout<<c<<" ~b "<<endl;
    // c=~a;
    // cout<<c<<" ~a "<<endl;
    // for(int i=2; i<=6; i++){
//     cout<<i++<<" ";
    // }
//    for(int i=2,j=1; i<=20,j<=10; i+2,j++){
//     cout<<i<<" x "<<j<<" = "<<i*j<<endl;
//    }
// int n;
// cin>>n;
//     int a =0;
//     int b =1;
//     cout<< a << " " << b<<" ";
//     for(int i=1; i<=n; i++){
//         int next = a+b;
//         cout<<next<< " ";
//         a=b;
//         b = next;
//     }
// int n;
// cin>>n;
// for(int i=2; i<n; i++){
//     if(n % i == 0){
//         cout<<" Not Prime";
//         break;
//     }
//     else{
//         cout<<" prime";
//         break;
//     }
// }
// for(int i=2; i<n; i++){
//    if(n % i == 0){
//     cout<<i<<" ";
//     continue;
//    }
   
//    }

// int ans=n%10;

// cout<<ans;

int arr[5];
for(int i=0; i<5; i++){
    cin>>arr[i];
}
int common =0;
for(int i=0; i<4; i++){
    for(int j=i+1; i<5; i++){
        if(arr[i] == arr[j]){
            common++;
           }
    }
}
cout<<common;
}