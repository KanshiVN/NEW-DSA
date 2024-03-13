#include<iostream>
using namespace std;
/*
int fact(int n){
    if(n==0){
        return 1;
    }

    return n * fact(n-1);
}*/

/*int power(int n){

    // basecase
    if(n==0)
        return 1;
    
    return 2 * power(n-1);
}
*/
int count(int n){
    if(n==0){
        return 1;
    }
    cout<<n<<" ";
    return count(n-1);

}
int main(){
    
    int n;
    cin>>n;
   /* int ans  = fact(n);
    cout<<ans;*/

    // int ans =power(n);
    // cout<<"2 ^ "<<n<<" = "<<ans;

    //printing number
    count(n);
    
}