#include<iostream>
using namespace std;
int main(){

    int a=5;
    int *ptr = &a;
    int **ptr2= &ptr;
       // both will have the same values 
    cout<<ptr<<endl;
    cout<<*ptr2<<endl<<endl;

// different ways of accessing values all of them pointing to the same value
    cout<<a<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;
 

}