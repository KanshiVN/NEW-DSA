#include<iostream>
#include<map>

using namespace std;
int main(){
    map<int,string> m;
    m[1]="babbar";
    m[12]="lvoe";
    m[4]="kanshi";
    m.insert({2,"bheem"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}