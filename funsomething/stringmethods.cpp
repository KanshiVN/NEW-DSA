#include <bits/stdc++.h> 
#include <iostream>

using namespace std;
//string reverse
void reverse(char name[],int n){
    int s=0;
    int e = n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
    
}
//getting the length
int getLength(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}
int main() {
    //Write your code here
    // double principle,time;
    // double rate;
    // cin>>principle>>time>>rate;
    // cout<< principle*rate*time/100;
    char name[20];
    cin>>name;
    for(int i=0; i<getLength(name); i++){
        cout<<name[i];
    }
    return 0;
}