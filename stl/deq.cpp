#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    
    for(int i:d){
        cout<<i<<" ";
        }
    cout<<endl<<"after pop_back:\n";
    // d.pop_back();
    // for(int i:d){
    //     cout<<i<<" ";
    //     }
    // d.pop_front();
    // for(int i:d){
    //     cout<<i<<" ";
    //     }
    cout<<"print first index element:"<<d.at(0);
    //before delete
    cout<<d.size();
    d.erase(d.begin(),d.begin()+1);//Giving the range here
    //after delete
    cout<<d.size();
    return 0;
}