#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"size\n";
    cin>>size;
    cout<<"Array\n";
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
        
    cout<<endl;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}