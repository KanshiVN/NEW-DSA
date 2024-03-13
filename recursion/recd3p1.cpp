#include<iostream>
using namespace std;

// bool isSorted(int *arr,int size){
// if(size==0||size==1){
//     return true;
// }
// if(arr[0]>arr[1]){
//     return false;
// }
// else{
//     bool remainingPart = isSorted(arr+1,size-1);
//     return remainingPart;
// }
// }
int getSum(int *arr,int size){
    if(size == 0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remaining = getSum(arr+1,size-1);
    int sum = arr[0] + remaining;
    return sum;

}

int main(){
    int arr[4]={1,3,5,32};
    int size=4;
    // bool ans =isSorted(arr,size);
    // if(ans){
    //     cout<<"Sorted"<<endl;
    // }
    // else{
    //     cout<<"Not sorted"<<endl;
    // }

    
    int ans = getSum(arr,size);
    cout<<"Sum is "<<ans;
    return 0;
}