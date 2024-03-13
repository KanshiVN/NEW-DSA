#include<iostream>
using namespace std;

bool LinearSearch(int *arr,int key,int size){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remaining = LinearSearch(arr+1,key,size-1);
        return remaining;
    }

}

int main(){

    int arr[6]={1,3,4,32,4,5};
    int key =31;
    int size = 6;
    bool ans = LinearSearch(arr,key,size);
    if(ans){
       cout<<"Key found ";
    }
    else{
        cout<<"Not found";
    }
    return 0;
}