#include<iostream>
#include<queue>
using namespace std;

int main(){
// maxheap
    priority_queue<int> maxi;
// minheap
    priority_queue<int,vector<int>,greater<int> > mini;
   maxi.push(1);
   maxi.push(2);
   maxi.push(4);
   maxi.push(8);
   int n= maxi.size();//because maxi size is changing so we have to intialze it first
   for(int i=0; i<n;i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
   }


    mini.push(1);
   mini.push(2);
   mini.push(4);
   mini.push(8);
   int n= mini.size();//because maxi size is changing so we have to intialze it first
   for(int i=0; i<n;i++){
    cout<<mini.top()<<" ";
    mini.pop();
   }

    return 0;
}