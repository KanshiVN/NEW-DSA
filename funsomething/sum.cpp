#include<iostream>
// #include<array>
#include<vector>
#include<algorithm>
using namespace std;
// int sum(int arr[],int n){
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum+=arr[i];
//     }
//     return sum;
// }


int main(){
// int arr[100];
// int n;
// cout<<"Enter size:";
// cin>>n;

// cout<<"\nEnter elements:";
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }
// int sumArray=sum(arr,n);

vector <int> arr(5);
vector<string> arr1;
for(int i=0; i<5; i++){
    cin>>arr[i];
}

sort(arr.begin(),arr.end());
for(int i:arr){
    cout<<i<<" ";
    
}


}