#include<iostream>
using namespace std;
int main(){
//COUNTING NUMBER OF OCCURENCES

int x;
cin>>x;//TAKING THE NUMBER TO SEARCH
int arr[6];

for(int i=0; i<6; i++){
cin>>arr[i];
}
int sum=0;
for(int i=0; i<6; i++){
    if(arr[i]==x){
        sum+=1;
    }
}
cout<<sum;
return 0;


   
}