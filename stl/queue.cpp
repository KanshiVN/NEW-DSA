#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("Kanshi");
    q.push("Harsh");
    q.push("ADAI");

    q.pop();
    cout<<q.front();
    return 0;
}