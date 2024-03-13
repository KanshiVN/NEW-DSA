#include<iostream>
using namespace std;

// void reachHome(int src, int dest){
//  cout<<src<<"--"<<dest<<endl;
// if(src==dest){
//     cout<<"pohoch gaya"<<endl;
//     return ;
// }

// src++;
// reachHome(src,dest);


int Fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans = Fib(n-1) + Fib(n-2);

    return ans;
    

}

int main(){
// int dest=10;
// int src =1;

// reachHome(src,dest);

int n;
cin>>n;
int ans = Fib(n);
cout<<ans;
}