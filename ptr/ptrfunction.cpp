#include<iostream>
using namespace std;

void PTR(int *ptr)
{
    cout<<"Value is "<<ptr<<endl;
    cout<<"Value is "<<*ptr<<endl;
}
// YOU cannot update the address with function "You can but you have to print the address in function cause if you print the address in main function then then the previous address would be printed"
void update(int *ptr){
    ptr = ptr+1; 
    // here it will be updated
    cout<<ptr;
}

// You can change the value in function
void updatevalue(int *ptr){
    *ptr = *ptr+1; 
    // here it will be updated
    
}

int main(){

    int arr[10]={5,4,33};
    int *ptr =&arr[0];
    PTR(ptr);
    
    //value didn't updated
    // cout<<ptr<<endl;
    // cout<<"Before update\n"<<ptr<<endl;
    // update(ptr);
    // cout<<"After update"<<endl;
    // cout<<ptr;
    // update(ptr);
    updatevalue(ptr);
    //Here it is updated
    cout<<*ptr;
    // you can pass specific part of array by using pointr & addresses
    // int SumArray(arr+3,4)
    // Here the arr will start from 3rd locn and 4 value's sum would be printed




}