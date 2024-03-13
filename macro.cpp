#include<iostream>
#define PI 3.14//macro created
#include<array>
#include<algorithm>
using namespace std;
// int score = 14;//global variable created which can be used anywhere in the code

//ref var
void a(int& i){
    cout<<i<<endl;
 
}
void b(int& i){
    cout<<i<<endl;
}


inline int func(int& c,int& d){
    return (c>d) ? c:d;
}
int main(){
//reference variable is used when you don't want to make the copies of the variable eg
int i = 5;
// a(i);
// b(i);
int c=55,d=16;
int getMax = func(c,d);
cout<<getMax;


cout<<PI * 2;//printing macro * 2
// array <int,5> arr;
// for( int i=0; i<6; i++){
//     cin>>arr[i];
// }
// sort(arr.begin(),arr.end());
// for( int i=0; i<6; i++){
//     if(arr[i] % 2 != 0)
//         continue;
//     else{
//      cout<<arr[i]<<" ";
//     }
// }
return 0;
}