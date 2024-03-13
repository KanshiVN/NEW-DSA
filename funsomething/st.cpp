#include<iostream>
using namespace std;

// int sum(int arr[],int n){
//     int sum=0;
// 			for(int i=1; i<=n; i++){
// 				sum+=arr[i];
// 			}	
//         return sum;
// }

// int prod(int arr[],int n){
//     int prod = 1;
//     for(int i=1; i<=n; i++){
// 				prod = prod * arr[i];
// 		}
// 		return prod;
// }
#include <bits/stdc++.h> 
long long int sum(long long int n)
   {
    return n*(n+1)/2;
        	
	
}
int main(){
    int n;
    cin>>n;
   int a = sum(n);
   cout<<a;
}
//only two test cases are correct by this method the product in some case is not correct

