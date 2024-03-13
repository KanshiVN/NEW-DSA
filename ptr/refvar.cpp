#include<iostream>
using namespace std;

void update(int i){
    i++;
}
void update2(int& i){
    i++;
}
int main(){

    // int i=4;
    // // creating the reference variable by "&j" which is the syntax
    //  REFERENCE VARIABLE IS SAME MEMORY DIFFERENT NAAM
    // int &j=i;
    // cout<<"Before update "<<i<<endl;
    // // update(i);
    // //no change but after using &update2
    // update2(i);
    // cout<<i<<endl;

    
    // creating n size array with heap memory
    // you have to use the new keyword to create a heaap memory in which you cannot use the nane 
    // char *ch = new char;
    // // array
    // int *arr = new int[5];
    // for(int i=0; i<5; i++){
    //     cin>>arr[i];
    // }
    // for(int i=0; i<5; i++){
    //     cout<< arr[i]<<" ";
    // }

    // array of variable size
    int n; 
    cin>>n;
    int *arr = new int[n];
    delete [] arr; // array deletion
    // delete n; single integer deletion
}