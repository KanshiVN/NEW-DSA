#include<iostream>
using namespace std;
int main(){
    // int adr=33;
    // int* ptr = &adr;
    // cout<<*ptr<<endl;
    // int a=*ptr+12;
    // cout<<a;

    int num =5;
    int *p = &num;
    cout<<*p<<" before\n";
    (*p)++;
    cout<<*p<<" after\n";

    // copying the pointer;
   int *q = p;
   cout<<p<<" "<<q;
   cout<<*p<<" "<<*q<<endl<<endl;

//    pointer arithmetic;
int i=3;
int *t = &i;
(*t)++;
cout<<*t<<endl;
 t = t+1;

}
