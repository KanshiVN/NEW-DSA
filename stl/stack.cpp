#include<iostream>
#include<stack>

using namespace std;
int main(){

    stack<int> a;
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(6);
   cout<<"Top element-> "<<a.top()<<endl;
   a.pop();
   cout<<"Top element-> "<<a.top()<<endl;
   cout<<"SIZE ->  "<<a.size();
    }