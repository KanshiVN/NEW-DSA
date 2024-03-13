#include<bits/stdc++.h>
using namespace std;

void sayDigit(string arr[],int n){
    if(n==0){
        return ;
    }
    int digit = n % 10;
     n = n / 10;
   

    sayDigit(arr,n);
    cout<<arr[digit]<<" ";

}

int main(){
    int n;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<endl<<endl;
    sayDigit(arr,n);
    cout<<endl<<endl;
}