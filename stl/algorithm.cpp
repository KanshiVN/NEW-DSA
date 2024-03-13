#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(2);
    v.push_back(33);
    v.push_back(89);
    v.push_back(9);
    int key = binary_search(v.begin(),v.end(),4);
    if(key){
        cout<<"Key is present";
    }
    else{
        cout<<"Not present\n";
    }
    
    //max
    int a=20;
    int b=4;
    cout<<"max "<<max(a,b)<<endl;
    swap(a,b);
    cout<<"A:"<<a<<" "<<"B:"<<b<<endl;
// reverse string
    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"Reverse:"<<abcd<<endl;

    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;

// for finding the unique do xor eg ans = 0 ans = ans xor arr[i]
}