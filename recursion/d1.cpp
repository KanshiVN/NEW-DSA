#include<iostream>
using namespace std;

int factorial(int n){
    if(n ==0)
        return 1;
    return n * factorial(n-1);
}

int power(int n){
    if(n==0)
        return 1;
    return 2*power(n-1);
}

void count(int n){
    if(n == 0){
        return ;
        }
    cout<< n <<endl;//head
    //recursive relation
    count(n-1);
}//for reverse print

void count2(int n){
    if(n == 0){
        return ;
        }
    //recursive relation
    count2(n-1);
    cout<< n <<endl;//tail
}


//when recursive realtion is above processing its called head relation
// else it's called tail relation

int main(){
    // recursive relation== f(n)= 2 x f(n-1)
    int n;
    cin>>n;
    // int ans = factorial(n);
    // cout<<ans<<endl;
    // int ans =power(n);
    count2(n);
    // cout<<ans<<endl;
    return 0;
}